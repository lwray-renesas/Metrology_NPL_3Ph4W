/*
 * em_event.c
 *
 *  Created on: 24 Oct 2023
 *      Author: a5126135
 */

#include "em_core.h"
#include "em_event.h"
#include "debug.h"

/** @brief check for events every 3 seconds*/
#define EVENT_CHECK_COUNT_VALUE	(6U)

static volatile EM_STATUS current_status = {0U, 0U, 0U, 0U, 0U, 0U};
static volatile uint8_t event_check_count = 0U;
static volatile uint8_t event_check_flag = 1U;

void EVENT_PollingProcessing(void)
{
	if(1U == event_check_flag)
	{
		volatile EM_STATUS new_status;
		volatile uint8_t ack_new_line_flag = 0U;
		event_check_flag = 0U;

		new_status = EM_GetStatus();

		if((1U == new_status.voltage_sag_R) && (0U == current_status.voltage_sag_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Sag Event Phase 1!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.voltage_sag_R) && (1U == current_status.voltage_sag_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Sag Recovered Phase 1!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.voltage_sag_Y) && (0U == current_status.voltage_sag_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Sag Event Phase 2!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.voltage_sag_Y) && (1U == current_status.voltage_sag_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Sag Recovered Phase 2!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.voltage_sag_B) && (0U == current_status.voltage_sag_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Sag Event Phase 3!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.voltage_sag_B) && (1U == current_status.voltage_sag_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Sag Recovered Phase 3!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.voltage_swell_R) && (0U == current_status.voltage_swell_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Swell Event Phase 1!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.voltage_swell_R) && (1U == current_status.voltage_swell_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Swell Recovered Phase 1!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.voltage_swell_Y) && (0U == current_status.voltage_swell_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Swell Event Phase 2!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.voltage_swell_Y) && (1U == current_status.voltage_swell_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Swell Recovered Phase 2!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.voltage_swell_B) && (0U == current_status.voltage_swell_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Swell Event Phase 3!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.voltage_swell_B) && (1U == current_status.voltage_swell_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rVoltage Swell Recovered Phase 3!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.noload_active_R) && (0U == current_status.noload_active_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Active Load Event Phase 1!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.noload_active_R) && (1U == current_status.noload_active_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Active Load Recovered Phase 1!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.noload_active_Y) && (0U == current_status.noload_active_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Active Load Event Phase 2!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.noload_active_Y) && (1U == current_status.noload_active_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Active Load Recovered Phase 2!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.noload_active_B) && (0U == current_status.noload_active_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Active Load Event Phase 3!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.noload_active_B) && (1U == current_status.noload_active_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Active Load Recovered Phase 3!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.noload_reactive_R) && (0U == current_status.noload_reactive_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Reactive Load Event Phase 1!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.noload_reactive_R) && (1U == current_status.noload_reactive_R))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Reactive Load Recovered Phase 1!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.noload_reactive_Y) && (0U == current_status.noload_reactive_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Reactive Load Event Phase 2!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.noload_reactive_Y) && (1U == current_status.noload_reactive_Y))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Reactive Load Recovered Phase 2!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if((1U == new_status.noload_reactive_B) && (0U == current_status.noload_reactive_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Reactive Load Event Phase 3!");
			ack_new_line_flag = 1U;
		}
		else if((0U == new_status.noload_reactive_B) && (1U == current_status.noload_reactive_B))
		{
			DEBUG_Printf((uint8_t*)"\n\rNo Reactive Load Recovered Phase 3!");
			ack_new_line_flag = 1U;
		}
		else
		{
			/* Do Nothing*/
		}

		if(1U == ack_new_line_flag)
		{
			DEBUG_AckNewLine();
		}

		/* Update the current status*/
		current_status = new_status;
	}
}
/* END OF FUNCTION*/

void EVENT_RTC_Callback(void)
{
	if(1U != event_check_flag)
	{
		++event_check_count;
		if(event_check_count >= EVENT_CHECK_COUNT_VALUE)
		{
			event_check_flag = 1U;
			event_check_count = 0U;
		}
	}
}
/* END OF FUNCTION*/
