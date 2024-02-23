/*
 * gfx.h
 *
 *  Created on: 26 Oct 2022
 *      Author: a5126135
 */

#ifndef APP_GFX_GFX_H_
#define APP_GFX_GFX_H_

#include <stdint.h>

/********** TEXT ********************/
#define BACKGROUND_TEXT_COLOUR	COLOUR_WHITE
#define FOREGROUND_TEXT_COLOUR	COLOUR_BLACK
#define PROBLEM_TEXT_COLOUR	COLOUR_RED

/*********** TITLE ********************/
#define TITLE_IMAGE_OFFSET_X  (22U)
#define TITLE_IMAGE_OFFSET_Y  (3U)
#define TITLE_IMAGE_WIDTH  (116U)
#define TITLE_IMAGE_HEIGHT  (20U)

/*********** BACKGROUND GENERIC *************/
#define BACKGROUND_X_START	(10U)
#define BACKGROUND_Y_START	(23U)
#define BACKGROUND_WIDTH	(149U)
#define BACKGROUND_HEIGHT	(57U)

/** @brief Initialises all graphical portions of the application*/
void Gfx_init(void);

/** @brief writes the title (renesas logo) to the display.*/
void Gfx_set_background_title(void);

/** @brief Utility functino used to clear the display background area (everything but the title/renesas logo)*/
void Gfx_erase_background(void);

/** @brief Utility function used to clear the entire display*/
void Gfx_erase_display(void);

/** @brief Writes string to screen
 * @param[in] x - x position of start of text
 * @param[in] y - y position of start of text
 * @param[in] str - pointer to string to write
 * @return length of string in pixels
 */
uint16_t Gfx_write_string(const uint16_t x, const uint16_t y, const char * str);

/** @brief Turns display off (low power settings)*/
void Gfx_display_off(void);

/** @brief turns display on*/
void Gfx_display_on(void);

/** @brief set backlight off*/
void Gfx_backlight_off(void);

/** @brief set backlight on*/
void Gfx_backlight_on(void);

/** @brief refreshes display with RAM buffer contents*/
void Gfx_display_refresh(void);

/** @brief Cycles LED states*/
void Gfx_cycle_led_state(void);

#endif /* APP_GFX_GFX_H_ */
