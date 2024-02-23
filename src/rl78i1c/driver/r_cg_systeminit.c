/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIESREGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2015, 2017 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_systeminit.c
* Version      : Code Generator for RL78/I1C V1.01.00.02 [15 May 2017]
* Device(s)    : R5F10NPJ
* Tool-Chain   : CCRL
* Description  : This file implements system initializing function.
* Creation Date: 3/22/2019
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_cgc.h"
#include "r_cg_port.h"
#include "r_cg_tau.h"
#include "r_cg_wdt.h"
#include "r_cg_sau.h"
#include "r_cg_iica.h"
#include "r_cg_rtc.h"
#include "r_cg_dsadc.h"
#include "r_cg_mac32bit.h"
#include "r_cg_12adc.h"
#include "r_cg_dtc.h"
#include "r_cg_elc.h"
#include "r_cg_lvd.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
#ifdef __ICCRL78__

#pragma diag_suppress = Pm011
int __low_level_init(void);
#pragma diag_default = Pm011
void R_Systeminit(void);

/* Set option bytes */
#pragma location = "OPTBYTE"
__root const uint8_t opbyte0 = 0x7EU;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte1 = 0x7FU;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte2 = 0xE0U;
#pragma location = "OPTBYTE"
__root const uint8_t opbyte3 = 0x84U;

/* Set security ID */
#pragma location = "SECUID"
__root const uint8_t secuid[10] = 
    {0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U};

/* Set debug monitor 1 area */
#pragma location = 0x000CE
__root const __far uint8_t debugmon1[10] = 
    {0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU, 0xFFU};

#endif /* __ICCRL78__ */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Systeminit
* Description  : This function initializes every macro.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Systeminit(void)
{
    PIOR0 = 0x02U;
    R_PORT_Create();
    R_CGC_Create();
    R_TAU0_Create();
    R_WDT_Create();
    R_SAU0_Create();
    R_IICA0_Create();
    R_RTC_Create();
    R_DSADC_Create();
    R_MAC32Bit_Create();
    R_12ADC_Create();
    R_DTC_Create();
    R_ELC_Create();
    R_LVD_Create();
    IAWCTL = 0x80U;
}

/***********************************************************************************************************************
* Function Name: hdwinit
* Description  : This function initializes hardware setting.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#if defined(__CCRL__)
void hdwinit(void)
{
    DI();
    R_Systeminit();
}
#endif /* __CCRL__ */

/***********************************************************************************************************************
* Function Name: __low_level_init
* Description  : This function initializes hardware setting.
* Arguments    : None
* Return Value : 1U -
*                    true
***********************************************************************************************************************/
#ifdef __ICCRL78__
#pragma diag_suppress = Pm011
int __low_level_init(void)
#pragma diag_default = Pm011
{
    DI();
    R_Systeminit();
    return (int)(1U);
}
#endif /* __ICCRL78__ */

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
