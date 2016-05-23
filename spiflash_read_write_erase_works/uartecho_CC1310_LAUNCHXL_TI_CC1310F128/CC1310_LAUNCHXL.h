/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       CC1310_LAUNCHXL.h
 *
 *  @brief      CC1310 LaunchPad Board Specific header file.
 *
 *  NB! This is the board file for CC1310 LaunchPad PCB version 1.0
 *
 *  ============================================================================
 */
#ifndef __CC1310_LAUNCHXL_BOARD_H__
#define __CC1310_LAUNCHXL_BOARD_H__

#ifdef __cplusplus
extern "C" {
#endif

/** ============================================================================
 *  Includes
 *  ==========================================================================*/
#include <ti/drivers/PIN.h>
#include <driverlib/ioc.h>

/** ============================================================================
 *  Externs
 *  ==========================================================================*/
extern const PIN_Config BoardGpioInitTable[];

/** ============================================================================
 *  Defines
 *  ==========================================================================*/

/* Same RF Configuration as 7x7 EM */
#define CC1310EM_7ID





/* Mapping of pins to board signals using general board aliases
 *      <board signal alias>        <pin mapping>   <comments>
 */

/* Discrete outputs */
#define Board_RLED                  IOID_5
#define Board_GLED                  IOID_6
#define Board_BLED                  IOID_7



#define Board_LED_ON                1
#define Board_LED_OFF               0

/* Discrete inputs */
#define Board_BTN1                  PIN_UNASSIGNED
#define Board_BTN2                  PIN_UNASSIGNED

#define Cp2103Uart_Reset		    IOID_20
#define General_Purpose1		    IOID_21

/* UART Board */
#define Board_UART_RX               IOID_3  			//DIO 3
#define Board_UART_TX               IOID_2  			//DIO 2
#define Board_UART_CTS              PIN_UNASSIGNED  	/* CTS  */
#define Board_UART_RTS              PIN_UNASSIGNED  	/* RTS */

/* SPI Board */
#define Board_SPI0_MISO             IOID_11         	/* DIO 11 */
#define Board_SPI0_MOSI             IOID_10         	/* DIO 10 */
#define Board_SPI0_CLK              IOID_9           	/* DIO 9 */
#define Board_SPI0_CSN              PIN_UNASSIGNED
#define Board_SPI1_MISO             PIN_UNASSIGNED
#define Board_SPI1_MOSI             PIN_UNASSIGNED
#define Board_SPI1_CLK              PIN_UNASSIGNED
#define Board_SPI1_CSN              PIN_UNASSIGNED

#define Board_USR_BTN              IOID_14
#define Board_HDC_nDRDY            IOID_19

#define Board_SYS_DONE				IOID_13



/* I2C */
#define Board_I2C0_SCL0             IOID_1
#define Board_I2C0_SDA0             IOID_18

/* SPI */
#define Board_SPI_FLASH_CS          IOID_8
#define Board_FLASH_CS_ON           0
#define Board_FLASH_CS_OFF          1

/* Booster pack generic */
#define Board_DIO0                  PIN_UNASSIGNED
#define Board_DIO1_RFSW             PIN_UNASSIGNED
#define Board_DIO12                 PIN_UNASSIGNED
#define Board_DIO15                 PIN_UNASSIGNED
#define Board_DIO16_TDO             PIN_UNASSIGNED
#define Board_DIO17_TDI             PIN_UNASSIGNED
#define Board_DIO21                 PIN_UNASSIGNED
#define Board_DIO22                 PIN_UNASSIGNED

#define Board_DIO23_ANALOG          PIN_UNASSIGNED
#define Board_DIO24_ANALOG          PIN_UNASSIGNED
#define Board_DIO25_ANALOG          PIN_UNASSIGNED
#define Board_DIO26_ANALOG          PIN_UNASSIGNED
#define Board_DIO27_ANALOG          PIN_UNASSIGNED
#define Board_DIO28_ANALOG          PIN_UNASSIGNED
#define Board_DIO29_ANALOG          PIN_UNASSIGNED
#define Board_DIO30_ANALOG          PIN_UNASSIGNED

/* Booster pack LCD (430BOOST - Sharp96 Rev 1.1) */
#define Board_LCD_CS                PIN_UNASSIGNED// SPI chip select
#define Board_LCD_EXTCOMIN          PIN_UNASSIGNED // External COM inversion
#define Board_LCD_ENABLE            PIN_UNASSIGNED // LCD enable
#define Board_LCD_POWER             PIN_UNASSIGNED // LCD power control
#define Board_LCD_CS_ON             1
#define Board_LCD_CS_OFF            0

/** ============================================================================
 *  Instance identifiers
 *  ==========================================================================*/
/* Generic SPI instance identifiers */
#define Board_SPI0                  CC1310_LAUNCHXL_SPI0
/* Generic UART instance identifiers */
#define Board_UART                  CC1310_LAUNCHXL_UART0
/* Generic I2C instance identifiers */
#define Board_I2C                  CC1310_LAUNCHXL_I2C0



/** ============================================================================
 *  Number of peripherals and their names
 *  ==========================================================================*/

/*!
 *  @def    CC1310_LAUNCHXL_I2CName
 *  @brief  Enum of I2C names on the CC2650 dev board
 */
typedef enum CC1310_LAUNCHXL_I2CName {
    CC1310_LAUNCHXL_I2C0 = 0,

    CC1310_LAUNCHXL_I2CCOUNT
} CC1310_LAUNCHXL_I2CName;

/*!
 *  @def    CC1310_LAUNCHXL_CryptoName
 *  @brief  Enum of Crypto names on the CC2650 dev board
 */
typedef enum CC1310_LAUNCHXL_CryptoName {
    CC1310_LAUNCHXL_CRYPTO0 = 0,

    CC1310_LAUNCHXL_CRYPTOCOUNT
} CC1310_LAUNCHXL_CryptoName;


/*!
 *  @def    CC1310_LAUNCHXL_SPIName
 *  @brief  Enum of SPI names on the CC2650 dev board
 */
typedef enum CC1310_LAUNCHXL_SPIName {
    CC1310_LAUNCHXL_SPI0 = 0,
    CC1310_LAUNCHXL_SPI1,

    CC1310_LAUNCHXL_SPICOUNT
} CC1310_LAUNCHXL_SPIName;

/*!
 *  @def    CC1310_LAUNCHXL_UARTName
 *  @brief  Enum of UARTs on the CC2650 dev board
 */
typedef enum CC1310_LAUNCHXL_UARTName {
    CC1310_LAUNCHXL_UART0 = 0,

    CC1310_LAUNCHXL_UARTCOUNT
} CC1310_LAUNCHXL_UARTName;

/*!
 *  @def    CC1310_LAUNCHXL_UdmaName
 *  @brief  Enum of DMA buffers
 */
typedef enum CC1310_LAUNCHXL_UdmaName {
    CC1310_LAUNCHXL_UDMA0 = 0,

    CC1310_LAUNCHXL_UDMACOUNT
} CC1310_LAUNCHXL_UdmaName;

#ifdef __cplusplus
}
#endif

#endif /* __CC1310_LAUNCHXL_BOARD_H__ */
