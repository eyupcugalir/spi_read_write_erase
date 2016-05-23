Example Summary
---------------
Example that uses the UART driver to echo back to the console.

Peripherals Exercised
---------------------
Board_LED0      Indicates that the board was initialized within main()
Board_UART0     Used to echo characters from host serial session

Resources & Jumper Settings
---------------------------
Please refer to the development board's specific "Settings and Resources"
section in the Getting Started Guide. For convenience, a short summary is also
shown below.

| Development board | Notes                                                  |
| ================= | ====================================================== |
| CC2650DK          | N/A                                                    |
| CC2650STE-BLE     |                                                        |
| CC3200            |                                                        |
| DK-TM4C123G       |                                                        |
| DK-TM4C129X       |                                                        |
| EK-TM4C123GXL     |                                                        |
| EK-TM4C1294XL     |                                                        |
| EK-TM4C129EXL     |                                                        |
| MSP-EXP430F5529LP |                                                        |
| MSP-EXP430FR5969  |                                                        |
| MSP-EXP430FR6989  |                                                        |
| MSP-EXP432P401R   |                                                        |
| TMDXDOCK28M36     |                                                        |
| TMDXDOCKH52C1     |                                                        |
| ----------------- | ------------------------------------------------------ |

Example Usage
-------------
Run the example. Board_LED0 turns ON to indicate TI-RTOS driver
initialization is complete.

When the application is running, open a serial session (e.g. HyperTerminal,
puTTY, etc.) to the appropriate COM port. Note: the COM port can be determined
via Device Manager in Windows or via ls /dev/tty* in Linux.

The connection should have the following settings
    Baud-rate:    9600
    Data bits:       8
    Stop bits:       1
    Parity:       None
    Flow Control: None

The target echoes back any character that is typed in the serial session.

If the serial session is started before the target completes initialization,
the following text is displayed:
    "Echoing characters:"

Application Design Details
--------------------------
This example shows how to initialize the UART driver in blocking read and write
mode with no data processing, while echoing characters back to a console.

A single task, "echo", reads a character from Board_UART0 and writes it back.

For GNU and IAR users, please read the following website for details about semi-hosting
http://processors.wiki.ti.com/index.php/TI-RTOS_Examples_SemiHosting.

Using the UART DMA Driver (CC3200 and TivaC only)
-------------------------------------------------
The CC3200 and TivaC platforms have DMA support for the UART driver.  For
these platforms, the uartecho example can be built with either the UART
driver with DMA support, or the non-DMA UART driver.  The default configuration
for this example is to use the non-DMA UART driver.  Since only one character
at a time is sent to the UART, this example is not an efficient use of the DMA,
but it still serves to illustrate use of the UART DMA driver.
To use the DMA version of the UART driver, build this example with the
compile flag:

    --define=TI_DRIVERS_UART_DMA=1

The <board>.c file includes either the UART driver with DMA support or the
non-DMA UART driver, based on this compile flag.

Note: For IAR users using any SensorTag(STK) Board, the XDS110 debugger must be
selected with the 4-wire JTAG connection within your projects' debugger
configuration.