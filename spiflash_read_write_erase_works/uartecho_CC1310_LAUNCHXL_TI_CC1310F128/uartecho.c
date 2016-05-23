  // XDCtools Header files //
  #include <xdc/std.h>
  #include <xdc/runtime/System.h>
  #include <xdc/cfg/global.h>

  // BIOS Header files //
  #include <ti/sysbios/BIOS.h>
  #include <ti/sysbios/knl/Task.h>
  #include <ti/sysbios/knl/Clock.h>


  // TI-RTOS Header files //
  #include <ti/drivers/PIN.h>
  //#include <ti/drivers/UART.h>
 // #include <ti/drivers/I2C.h>
  #include <ti/drivers/SPI.h>

  // Example/Board Header files
  #include "Board.h"

  #include "ext_flash.h"
  #include "bsp_spi.h"




  #include <stdlib.h>
  #include <stdbool.h>
  #include <stdint.h>
  #include <string.h>


  #define TASKSTACKSIZE     768
  #define delay_ms(i) Task_sleep( ((i) * 1000) / Clock_tickPeriod )

  Task_Struct task0Struct;
  Char task0Stack[TASKSTACKSIZE];

  // Global memory storage for a PIN_Config table
  static PIN_State ledPinState;
  //static SPI_Handle spiHandle;
 // static SPI_Params spiParams;

  //
  // Application LED pin configuration table:
  //   - All LEDs board LEDs are off.
   //
  PIN_Config ledPinTable[] = {
      Board_LED0 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,
      Board_LED1 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,
      Board_LED2 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,

      PIN_TERMINATE
  };


  PIN_Handle ledPinHandle;


  Void taskFxn(UArg arg0, UArg arg1)
  {
	  uint8_t id[256] ;
	  uint32_t  offset=0x0000;
	  uint8_t readid[256];
	  uint8_t page1 =0x01;
	  int i;
	  // Application main loop
	   for (;;)
	   {

		   for ( i=0; i<256;i++)
		   {
			   id[i]=i;
		   }


		/*   if (extFlashTest())
		   {
			   System_printf("success\n");
		    	  System_flush();


		   }else {
			   System_printf("nooooo\n");
		    	  System_flush();


		   }
		   delay_ms(2000);*/
           memset(readid, 5, sizeof(readid));
          // System_printf( "id =  %x %x %x %x %x %x %x %x\n", id[0],id[1],id[2],id[3],id[4],id[5],id[6],id[7]);
        	//	   System_flush();
           extFlashOpen();

           	   OADTarget_writeFlash(page1, offset, id, sizeof(id));
        	   delay_ms(2000);
        	   OADTarget_readFlash(page1, offset, readid, sizeof(readid));
        	   System_printf( "id = %x %x %x %x %x %x %x %x %x %x %x  %x \n", readid[0],readid[1],readid[42],readid[33],readid[44],readid[5],readid[6],readid[7],readid[8],readid[9],readid[10],readid[11]);
        	   System_flush();
        	   delay_ms(2000);
        	   OADTarget_eraseFlash(page1);
        	  // extFlashErase(offset, sizeof(readid));

        	   delay_ms(2000);
        	   OADTarget_readFlash(page1, offset, readid, sizeof(readid));

        	   System_printf( "sil id = %x %x %x %x %x %x %x %x %x %x %x  %x \n", readid[0],readid[1],readid[2],readid[3],readid[4],readid[5],readid[6],readid[7],readid[8],readid[9],readid[10],readid[11]);
        	   System_flush();



		   //extFlashReadID(id);
         /* if(extFlashWrite(offset, sizeof (id), id))
          {
        	  delay_ms(2000);
        	  extFlashRead(offset, sizeof (readid), readid);
        	  System_printf( "id = %x %x %x %x %x %x %x %x %x %x %x  %x \n", readid[0],readid[1],readid[2],readid[3],
        			  readid[4],readid[5],readid[6],readid[7],readid[8],readid[9],readid[10],readid[11]);
        	  System_flush();
        	  delay_ms(2000);
          }
          else{
        	  System_printf( "Yazmadı\n");
        	  System_flush();
          }*/
		   extFlashClose();

	   }
  }

   //  ======== main ========
   //
  int main(void)
  {
      PIN_Handle ledPinHandle;
      Task_Params taskParams;

      // Call board init functions
      Board_initGeneral();
      //Board_initSPI();


      // Construct BIOS objects
      Task_Params_init(&taskParams);
      taskParams.stackSize = TASKSTACKSIZE;
      taskParams.stack = &task0Stack;
      Task_construct(&task0Struct, (Task_FuncPtr)taskFxn, &taskParams, NULL);


      // Open LED pins
      ledPinHandle = PIN_open(&ledPinState, ledPinTable);

      if(!ledPinHandle) {
    	  System_printf("Error initializing board LED pins\n");
    	  System_flush();
      }
      else{
    	  System_printf("Perfect! initializing board LED pins\n");
    	  System_flush();
      }

     // PIN_setOutputValue(ledPinHandle, Board_LED0, 1);
      PIN_setOutputValue(ledPinHandle, Board_LED1, 1);
     // PIN_setOutputValue(ledPinHandle, Board_LED2, 1);
    //  PIN_setOutputValue(ledPinHandle, Board_CP2103UARTRESET, 1);
     // PIN_setOutputValue(ledPinHandle, Board_GENERALPURPOSE1, 1);



      // Start BIOS
      BIOS_start();

      return (0);
  }
