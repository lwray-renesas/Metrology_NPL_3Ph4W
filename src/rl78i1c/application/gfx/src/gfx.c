/*
 * gfx.c
 *
 *  Created on: 26 Oct 2022
 *      Author: a5126135
 */

#include "gfx.h"
#include "st7735s_port.h"
#include "st7735s.h"
#include "draw.h"
#include "text.h"
#include "string.h"
#include "images.h"

/** @brief abs function for gfx stuff*/
#define GFX_ABS(a, b) ((a > b) ? a-b : b-a)

/** Display area data*/
static ST7735S_display_area_info_t disp_info;

void Gfx_init(void)
{
	St7735s_init(COLOUR_WHITE);

	St7735s_get_display_area_info(&disp_info);

	Text_init(disp_info.xmax, disp_info.ymax);
	Draw_init(disp_info.xmax, disp_info.ymax);

	Text_set_font(&default_font);
}
/* END OF FUNCTION*/

void Gfx_set_background_title(void)
{
	St7735s_send_image(TITLE_IMAGE_OFFSET_X, TITLE_IMAGE_OFFSET_Y, TITLE_IMAGE_WIDTH, TITLE_IMAGE_HEIGHT, (__far const uint8_t *)renesas_title);
}
/* END OF FUNCTION*/

void Gfx_erase_background(void)
{
	static const solid_rectangle_t eraser = {
			.height = BACKGROUND_HEIGHT,
			.width = BACKGROUND_WIDTH,
			.x0 = BACKGROUND_X_START,
			.y0 = BACKGROUND_Y_START,
			.colour = BACKGROUND_TEXT_COLOUR,
	};

	Draw_solid_rectangle(&eraser);
}
/* END OF FUNCTION*/

void Gfx_erase_display(void)
{
	St7735s_set_colour(BACKGROUND_TEXT_COLOUR);
	St7735s_fill_display();
	St7735s_set_colour(FOREGROUND_TEXT_COLOUR);
}
/* END OF FUNCTION*/

uint16_t Gfx_write_string(const uint16_t x, const uint16_t y, const char * str)
{
	return Text_put_str(x, y, str, FOREGROUND_TEXT_COLOUR, BACKGROUND_TEXT_COLOUR);
}
/* END OF FUNCTION*/

void Gfx_display_off(void)
{
	St7735s_sleep_display();
	St7735s_display_off();
}
/* END OF FUNCTION*/

void Gfx_display_on(void)
{
	St7735s_wake_display();
	St7735s_display_on();
}
/* END OF FUNCTION*/

void Gfx_backlight_off(void)
{
	P1_bit.no1 = 1U;
}
/* END OF FUNCTION*/

void Gfx_backlight_on(void)
{
	P1_bit.no1 = 0U;
}
/* END OF FUNCTION*/

void Gfx_display_refresh(void)
{
	St7735s_refresh();
}
/* END OF FUNCTION*/
