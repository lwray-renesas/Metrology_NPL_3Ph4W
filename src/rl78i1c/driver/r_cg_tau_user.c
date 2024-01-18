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
* File Name    : r_cg_tau_user.c
* Version      : Code Generator for RL78/I1C V1.01.00.02 [15 May 2017]
* Device(s)    : R5F10NPJ
* Tool-Chain   : CCRL
* Description  : This file implements device driver for TAU module.
* Creation Date: 3/22/2019
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_tau.h"
/* Start user code for include. Do not edit comment generated here */
#include "em_core.h"
#include "r_calib.h"
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
extern volatile uint8_t saved_direction;
extern volatile uint8_t timer_running;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: r_tau0_channel0_interrupt
* Description  : This function INTTM00 interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#ifdef __CCRL__
#pragma interrupt r_tau0_channel0_interrupt(vect=INTTM00)
#endif /* __CCRL__ */
#ifdef __ICCRL78__
#pragma vector = INTTM00_vect
#endif /* __ICCRL78__ */
__INTERRUPT static void r_tau0_channel0_interrupt(void)
{
    /* Start user code. Do not edit comment generated here */
    EI();
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_tau0_channel1_interrupt
* Description  : This function INTTM01 interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#ifdef __CCRL__
#pragma interrupt r_tau0_channel1_interrupt(vect=INTTM01)
#endif /* __CCRL__ */
#ifdef __ICCRL78__
#pragma vector = INTTM01_vect
#endif /* __ICCRL78__ */
__INTERRUPT static void r_tau0_channel1_interrupt(void)
{
    /* Start user code. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_tau0_channel2_interrupt
* Description  : This function INTTM02 interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#ifdef __CCRL__
#pragma interrupt r_tau0_channel2_interrupt(vect=INTTM02)
#endif /* __CCRL__ */
#ifdef __ICCRL78__
#pragma vector = INTTM02_vect
#endif /* __ICCRL78__ */
__INTERRUPT static void r_tau0_channel2_interrupt(void)
{
    /* Start user code. Do not edit comment generated here */
    EI();
    
    if (R_CALIB_IsInCalibMode() == 0)
    {
        EM_TIMER_InterruptCallback();
    }
    /* End user code. Do not edit comment generated here */
}

#ifdef __CCRL__
#pragma interrupt r_tau0_channel3_interrupt(vect=INTTM03)
#endif /* __CCRL__ */
#ifdef __ICCRL78__
#pragma vector = INTTM03_vect
#endif /* __ICCRL78__ */
__INTERRUPT static void r_tau0_channel3_interrupt(void)
{
    /* Start user code. Do not edit comment generated here */

	if(1U == saved_direction)
	{
		P3_bit.no7 = 0;
	}
	else if(2U == saved_direction)
	{
		P3_bit.no7 = 1;
	}
	else
	{
		/* Do Nothing*/
	}

	/* Reset Flags for zero cross algorithm*/
	saved_direction = 0U;
	timer_running = 0U;

    /* End user code. Do not edit comment generated here */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
