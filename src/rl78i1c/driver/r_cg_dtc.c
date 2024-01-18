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
* File Name    : r_cg_dtc.c
* Version      : Code Generator for RL78/I1C V1.01.00.02 [15 May 2017]
* Device(s)    : R5F10NPL
* Tool-Chain   : CCRL
* Description  : This file implements device driver for DTC module.
* Creation Date: 3/22/2019
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_dtc.h"
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
/* 
 * Memory section changed by linker options 
*/
#ifdef __CCRL__

#pragma section bss DTC_Vect
volatile uint8_t __near dtc_vectortable[51U];

#pragma section bss DTCD0
volatile st_dtc_data __near dtc_controldata_0;

#elif (defined __ICCRL78__)

#pragma default_variable_attributes=__no_init @"DTC_Vect"
volatile uint8_t dtc_vectortable[51U];

#pragma default_variable_attributes=__no_init @"DTCD0"
volatile st_dtc_data dtc_controldata_0;

#pragma default_variable_attributes =

#else

volatile uint8_t dtc_vectortable[51U];
volatile st_dtc_data dtc_controldata_0;

#endif 

/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_DTC_Create
* Description  : This function initializes the DTC module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_DTC_Create(void)
{
    /* Enable input clock supply */
    DTCEN = 1U;     /* enables input clock supply */
    /* Disable all DTC channels operation */
    DTCEN0 = 0x00U;
    DTCEN1 = 0x00U;
    DTCEN2 = 0x00U;
    DTCEN3 = 0x00U;
    DTCEN4 = 0x00U;
    DTCEN5 = 0x00U;
    DTCEN6 = 0x00U;
    /* Set base address */
    DTCBAR = 0x85U;
    /* Set DTCD0 */
    dtc_vectortable[11U] = 0x40U;
    dtc_controldata_0.dtccr = _40_DTC_DATA_SIZE_16BITS | _00_DTC_REPEAT_INT_DISABLE | _00_DTC_CHAIN_TRANSFER_DISABLE | 
                              _00_DTC_SOURCE_ADDR_FIXED | _00_DTC_REPEAT_AREA_DEST | _01_DTC_TRANSFER_MODE_REPEAT;
    dtc_controldata_0.dtbls = _03_DTCD0_TRANSFER_BLOCKSIZE;
    dtc_controldata_0.dtcct = _02_DTCD0_TRANSFER_BYTE;
    dtc_controldata_0.dtrld = _02_DTCD0_TRANSFER_BYTE;
    dtc_controldata_0.dtsar = _0000_DTCD0_SRC_ADDRESS;
    dtc_controldata_0.dtdar = _0000_DTCD0_DEST_ADDRESS;

    R_DTC_Create_UserInit();
}
/***********************************************************************************************************************
* Function Name: R_DTCD0_Start
* Description  : This function enables DTCD0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_DTCD0_Start(void)
{
    DTCEN1 |= _10_DTC_SARAD_ACTIVATION_ENABLE;
}
/***********************************************************************************************************************
* Function Name: R_DTCD0_Stop
* Description  : This function disables DTCD0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_DTCD0_Stop(void)
{
    DTCEN1 &= (uint8_t)~_10_DTC_SARAD_ACTIVATION_ENABLE;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
