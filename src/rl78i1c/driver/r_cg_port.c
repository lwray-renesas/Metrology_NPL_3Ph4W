/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
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
* Copyright (C) 2015, 2021 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name    : r_cg_port.c
* Version      : Applilet4 for RL78/I1C V1.01.07.02 [08 Nov 2021]
* Device(s)    : R5F10NPL
* Tool-Chain   : CCRL
* Description  : This file implements device driver for Port module.
* Creation Date: 22/02/2024
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_port.h"
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
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_PORT_Create
* Description  : This function initializes the Port I/O.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_PORT_Create(void)
{
    PFSEG0 = _00_PFCOM3_PORT | _00_PFCOM2_PORT | _00_PFCOM1_PORT | _00_PFCOM0_PORT;
    PFSEG1 = _00_PFSEG07_PORT | _00_PFSEG06_PORT | _00_PFSEG05_PORT | _00_PFSEG04_PORT | _00_PFSEG03_PORT |
             _00_PFSEG02_PORT | _00_PFSEG01_PORT | _00_PFSEG00_PORT;
    PFSEG2 = _00_PFSEG15_PORT | _00_PFSEG14_PORT | _00_PFSEG13_PORT | _00_PFSEG12_PORT | _00_PFSEG11_PORT |
    		_00_PFSEG10_PORT | _00_PFSEG09_PORT | _00_PFSEG08_PORT;
    PFSEG3 = _00_PFSEG23_PORT | _00_PFSEG22_PORT | _00_PFSEG21_PORT | _00_PFSEG20_PORT | _00_PFSEG19_PORT |
             _00_PFSEG18_PORT | _00_PFSEG17_PORT | _00_PFSEG16_PORT;
    PFSEG4 = _00_PFSEG31_PORT | _00_PFSEG30_PORT | _00_PFSEG29_PORT | _00_PFSEG28_PORT | _00_PFSEG27_PORT |
             _00_PFSEG26_PORT | _00_PFSEG25_PORT | _00_PFSEG24_PORT;
    PFSEG5 = _00_PFSEG39_PORT | _00_PFSEG38_PORT | _00_PFSEG37_PORT | _00_PFSEG36_PORT | _00_PFSEG35_PORT |
             _00_PFSEG34_PORT | _00_PFSEG33_PORT | _00_PFSEG32_PORT;
    PFSEG6 = _00_PFSEG41_PORT | _00_PFSEG40_PORT;

    P0 = _00_Pn2_OUTPUT_0;
    P1 = _10_Pn4_OUTPUT_1 | _08_Pn3_OUTPUT_1 | _04_Pn2_OUTPUT_1 | _02_Pn1_OUTPUT_1;
    P4 = _00_Pn3_OUTPUT_0;
    PU4 = _01_PUn0_PULLUP_ON;
    POM0 = _00_POMn2_NCH_OFF;
    PM0 = _03_PM0_DEFAULT_VALUE | _00_PMn2_MODE_OUTPUT;
    PM1 = _40_PMn6_MODE_INPUT | _00_PMn4_MODE_OUTPUT | _00_PMn3_MODE_OUTPUT | _00_PMn2_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT;
    PM4 = _F2_PM4_DEFAULT_VALUE | _00_PMn3_MODE_OUTPUT;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
