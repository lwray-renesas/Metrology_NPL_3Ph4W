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
* File Name    : r_cg_dsadc_user.c
* Version      : Code Generator for RL78/I1C V1.01.00.02 [15 May 2017]
* Device(s)    : R5F10NPJ
* Tool-Chain   : CCRL
* Description  : This file implements device driver for DSADC module.
* Creation Date: 3/22/2019
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_dsadc.h"
/* Start user code for include. Do not edit comment generated here */
#include "r_cg_dtc.h"
#include "r_cg_elc.h"
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
extern void EM_ADC_InterruptCallback(void);
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: r_dsadc_interrupt
* Description  : None
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#ifdef __CCRL__
#pragma interrupt r_dsadc_interrupt(vect=INTDSAD)
#endif /* __CCRL__ */
#ifdef __ICCRL78__
#pragma vector = INTDSAD_vect
#endif /* __ICCRL78__ */
__INTERRUPT static void r_dsadc_interrupt(void)
{
    /* Start user code. Do not edit comment generated here */
    DTC_USER_ADC_TRANSFER_RELOAD();
    
    /* Disable ELC1 DSAD-->ADC trigger to mask off fixed 21us DSAD pulse width, so TAU01-->ADC can be triggered */
    R_ELC_DIRECT_CLEAR(ELC_TRIGGER_SRC_INTDSAD_MAIN);
    
    EM_ADC_InterruptCallback();

    /* Enable back ELC1 DSAD-->ADC for next DSAD interrupt to trigger
     * Note: ensure the DSAD interrupt software processing (EM_ADC_InterruptCallback) is longer than 21us 
	 * to prevent unwanted DSAD->ADC trigger when enable back
    */
    R_ELC_DIRECT_SET(ELC_TRIGGER_SRC_INTDSAD_MAIN, _01_ELC_EVENT_LINK_AD);
    /* End user code. Do not edit comment generated here */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
