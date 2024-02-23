/*
 * images.c
 *
 *  Created on: 3 Aug 2022
 *      Author: a5126135
 */


#include <stdint.h>

#pragma section const IMAGE

static const uint8_t COLOUR_BLACK[] = {0x00, 0x00};
static const uint8_t COLOUR_GREY[] = {0x52, 0x8A};
static const uint8_t COLOUR_WHITE[] = {0xFF, 0xFF};
static const uint8_t COLOUR_RED[] = {0xF8, 0x00};
static const uint8_t COLOUR_GREEN[] = {0x07, 0xE0};
static const uint8_t COLOUR_BLUE[] = {0x00, 0x1F};
static const uint8_t COLOUR_CYAN[] = {0x07, 0xFF};
static const uint8_t COLOUR_MAGENTA[] = {0xF8, 0x1F};
static const uint8_t COLOUR_YELLOW[] = {0xFF, 0xE0};
static const uint8_t COLOUR_ORANGE[] = {0xFC, 0x00};

static const uint8_t COLOUR_VERY_GOOD[] = {0x67, 0xEC};
static const uint8_t COLOUR_GOOD[] = {0xB7, 0xEC};
static const uint8_t COLOUR_MEDIUM[] = {0xE7, 0xEC};
static const uint8_t COLOUR_POOR[] = {0xFE, 0xEC};
static const uint8_t COLOUR_BAD[] = {0xFC, 0xEC};

/** @brief Image converted with: http://javl.github.io/image2cpp/
 * Image sourced from: internal Renesas markcom.
 */
__far const uint16_t renesas_title[] = {
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x9EF7,
		0x3EE7, 0xDDDE, 0xBDD6, 0xBDD6, 0xDDDE, 0x1EE7, 0x9FF7, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x5EEF, 0x3AAD, 0xB652, 0x9431, 0x7331, 0x7329, 0x7329, 0x7329,
		0x7329, 0x7429, 0xB431, 0x576B, 0xBDD6, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0x9EF7, 0xD99C, 0xB65A, 0x554A, 0xF87B, 0x5AAD, 0xDBBD,
		0x1CC6, 0xFCC5, 0x9BB5, 0x1884, 0x9431, 0x3329, 0x3329, 0x3329,
		0x5329, 0x776B, 0xBFF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x9EF7, 0x354A, 0x7773, 0xBDD6,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x5EEF, 0x554A, 0x3329, 0x5329, 0x3329, 0x3329, 0x1884, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBFF7, 0xBFF7, 0xBFF7,
		0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xFFFF, 0xFFFF,
		0xDFFF, 0xBFF7, 0xBFF7, 0xDFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBFF7, 0xDFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBFF7, 0xBFF7,
		0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBFF7, 0xBFF7, 0xBFF7,
		0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xBFFF,
		0xBFF7, 0xBFF7, 0xDFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBFF7, 0xBFF7, 0xBFF7,
		0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xBFF7, 0xFFFF, 0xFFFF,
		0xDFFF, 0x9EF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDBBD, 0x3329, 0x5329,
		0x5329, 0x3329, 0xF439, 0xFFFF, 0xFFFF, 0xFFFF, 0x7CCE, 0xD65A,
		0xB431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431,
		0x9431, 0x554A, 0xFFFF, 0xFFFF, 0x9773, 0x9431, 0x9431, 0x9431,
		0xD65A, 0x5EEF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x1884, 0x9431, 0xB994, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0x1CC6,
		0x9652, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431,
		0x9431, 0x9431, 0xD439, 0xDFFF, 0xFFFF, 0xFFFF, 0xBBB5, 0x754A,
		0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431,
		0x9431, 0x9431, 0x5EEF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0x7EEF, 0x3663, 0x9431, 0x9431, 0x9331, 0xD65A, 0xDFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xBEF7, 0x3AA5, 0x354A,
		0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431, 0x9431,
		0x9431, 0x9552, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xBBB5, 0x3329, 0x5329, 0x3329, 0x3329, 0xD65A, 0xFFFF,
		0x9FF7, 0xB873, 0x5329, 0x3329, 0x3329, 0x9431, 0x354A, 0x754A,
		0x754A, 0x754A, 0x754A, 0x754A, 0x754A, 0xBBBD, 0xFFFF, 0xFFFF,
		0x776B, 0x3329, 0x3329, 0x3329, 0x3329, 0xD439, 0x7DD6, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xD87B, 0x5329, 0x9994, 0xFFFF,
		0xFFFF, 0xBFF7, 0x376B, 0x3329, 0x5329, 0x3329, 0x9431, 0x554A,
		0x754A, 0x754A, 0x754A, 0x754A, 0x754A, 0x9552, 0x9CD6, 0xFFFF,
		0x5EEF, 0xD65A, 0x3329, 0x3329, 0x3329, 0x7331, 0x1542, 0x754A,
		0x754A, 0x754A, 0x754A, 0x754A, 0x754A, 0xB99C, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x5EEF, 0x3542, 0x3329, 0x3329,
		0x3329, 0x3329, 0x5329, 0x1CC6, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x5EEF, 0x554A, 0x3329, 0x5329, 0x3329, 0x9331, 0x354A, 0x754A,
		0x754A, 0x754A, 0x754A, 0x754A, 0x754A, 0x3AAD, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x5EEF, 0x754A, 0x3329, 0x3329,
		0x3329, 0xB431, 0x1DE7, 0xFFFF, 0xBBB5, 0x5329, 0x5329, 0x3329,
		0x754A, 0x9EF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x776B, 0x3329, 0x7329, 0x3329,
		0x3329, 0x3329, 0x754A, 0x9EF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xD87B, 0x5329, 0x9994, 0xFFFF, 0xFFFF, 0x598C, 0x3329, 0x5329,
		0x3329, 0xD65A, 0xBFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x1CC6, 0x3329, 0x5329, 0x3329,
		0x3329, 0x9CD6, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xD87B, 0x3329, 0x3329, 0x5329, 0x5329, 0x3329, 0x3329, 0x754A,
		0x9EF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xD87B, 0x3329, 0x5329, 0x5329,
		0xB439, 0xBEF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFDDE,
		0xD439, 0x5329, 0x3329, 0x3329, 0x7329, 0x5CC6, 0xFFFF, 0xFFFF,
		0xF87B, 0x3329, 0x5329, 0x3329, 0xFCBD, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x776B, 0x3329, 0xD87B, 0x554A, 0x5329, 0x3329, 0x3329, 0xB652,
		0xBFF7, 0xFFFF, 0xFFFF, 0xFFFF, 0xD87B, 0x5329, 0x9994, 0xFFFF,
		0xFFFF, 0x9773, 0x3329, 0x5329, 0x3329, 0xBDD6, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x1CC6, 0x3329, 0x5329, 0x3329, 0x3329, 0x9773, 0xBFF7, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xDBBD, 0x5329, 0x3329, 0x3329, 0x5AAD,
		0xD65A, 0x3329, 0x3329, 0x3329, 0x9994, 0xFFFF, 0xFFFF, 0xFFFF,
		0x9773, 0x3329, 0x5329, 0x5329, 0x5329, 0x398C, 0xBFF7, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0x7EEF, 0xF87B, 0x7329, 0x3329, 0x3329, 0x9431, 0xB994,
		0x3EE7, 0xFFFF, 0xFFFF, 0xFFFF, 0x576B, 0x5329, 0x5329, 0x5329,
		0xBBB5, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7,
		0x3EE7, 0xBFF7, 0xFFFF, 0xFFFF, 0x776B, 0x3329, 0x3884, 0x9DD6,
		0x5329, 0x3329, 0x3329, 0x3329, 0xB773, 0xFFFF, 0xFFFF, 0xFFFF,
		0xD87B, 0x5329, 0x9994, 0xFFFF, 0xFFFF, 0x1663, 0x5329, 0x5329,
		0x3329, 0x7CCE, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7, 0x3EE7,
		0x3EE7, 0x3EE7, 0xFFFF, 0xFFFF, 0x5EEF, 0x1442, 0x3329, 0x3329,
		0x3329, 0x3329, 0x5329, 0xF662, 0x798C, 0xFEDE, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xB652,
		0x3329, 0x3329, 0xD65A, 0xDFFF, 0xBDD6, 0x7329, 0x5329, 0x5329,
		0xF439, 0x9EF7, 0xFFFF, 0xFFFF, 0x3EE7, 0xF439, 0x3329, 0x3329,
		0x3329, 0x3329, 0x7329, 0x3763, 0x9994, 0x3EE7, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBDD6, 0xBDD6,
		0xBDD6, 0xBDD6, 0xDDDE, 0xDFFF, 0xFFFF, 0xFBBD, 0x3329, 0x5329,
		0x5329, 0x3329, 0x5BAD, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x576B, 0x5329, 0x5329, 0x3329, 0x3329, 0x3329, 0x3329, 0x3329,
		0x3329, 0x3329, 0x3329, 0x3329, 0x7431, 0x7EEF, 0xFFFF, 0xFFFF,
		0x776B, 0x3329, 0x3884, 0xFFFF, 0xBDDE, 0x7329, 0x3329, 0x3329,
		0x3329, 0x598C, 0xFFFF, 0xFFFF, 0xD87B, 0x5329, 0x9994, 0xFFFF,
		0xFFFF, 0x1663, 0x5329, 0x5329, 0x3329, 0x3329, 0x3329, 0x3329,
		0x3329, 0x3329, 0x3329, 0x3329, 0x3329, 0x9652, 0xDFFF, 0xFFFF,
		0xFFFF, 0xDFFF, 0x376B, 0x9431, 0x3329, 0x3329, 0x3329, 0x3329,
		0x3329, 0x3329, 0xF439, 0xBBB5, 0x3EE7, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xDA9C, 0x3329, 0x3329, 0x3329, 0xDBBD, 0xFFFF,
		0xFFFF, 0xD87B, 0x3329, 0x3329, 0x3329, 0x1663, 0xDFFF, 0xFFFF,
		0xFFFF, 0x1EE7, 0x9652, 0x7329, 0x3329, 0x3329, 0x3329, 0x3329,
		0x3329, 0x3329, 0x754A, 0x5CCE, 0x7EEF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0x1EE7, 0x3329, 0x3329, 0x3329, 0x3329, 0xB431, 0x1EE7,
		0xFFFF, 0x9EF7, 0x554A, 0x5329, 0x3329, 0x3329, 0xF87B, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x576B, 0x5329, 0x3329, 0x3329,
		0x3884, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5,
		0xDDDE, 0xFFFF, 0xFFFF, 0xFFFF, 0x776B, 0x3329, 0x3884, 0xFFFF,
		0xFFFF, 0x7BAD, 0x3329, 0x5329, 0x3329, 0x5329, 0x3CC6, 0xFFFF,
		0xD87B, 0x5329, 0x9994, 0xFFFF, 0xFFFF, 0x1663, 0x5329, 0x5329,
		0x3329, 0xB994, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5, 0x3AA5,
		0x3AA5, 0xFDDE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x3EE7,
		0x7BAD, 0xD439, 0x3329, 0x3329, 0x5329, 0x5329, 0x5329, 0x3321,
		0x9331, 0x9994, 0xFFFF, 0xFFFF, 0xFFFF, 0xFDDE, 0x9431, 0x3329,
		0x3329, 0x1663, 0xDFFF, 0xFFFF, 0xFFFF, 0xFDDE, 0x3329, 0x3329,
		0x5329, 0x3321, 0xDBBD, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0x1EE7,
		0xB994, 0x5329, 0x3321, 0x3329, 0x5329, 0x5329, 0x3329, 0x3329,
		0xB439, 0x1AA5, 0xFFFF, 0xFFFF, 0xFFFF, 0x1EE7, 0x3329, 0x5329,
		0x5329, 0x5329, 0xB431, 0x1EE7, 0xFFFF, 0xFFFF, 0x9DD6, 0xF441,
		0x3329, 0x3329, 0x7331, 0x1CC6, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x576B, 0x5329, 0x3329, 0x5329, 0x3CC6, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x776B, 0x3329, 0x3884, 0xFFFF, 0xFFFF, 0xFFFF, 0x3884, 0x3329,
		0x5329, 0x3329, 0x7431, 0xBDD6, 0xD87B, 0x5329, 0x9994, 0xFFFF,
		0xFFFF, 0x1663, 0x5329, 0x5329, 0x3329, 0x1EE7, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0xBDD6, 0x7994,
		0xD65A, 0x3329, 0x3329, 0x3329, 0x5329, 0x3329, 0x1884, 0xDFFF,
		0xFFFF, 0xB773, 0x3329, 0x3329, 0x9431, 0xBDD6, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xD99C, 0x3329, 0x3329, 0x3329, 0x7552, 0xBFF7,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDFFF, 0x3CC6, 0x598C,
		0x754A, 0x5329, 0x3329, 0x3329, 0x3329, 0x5329, 0x3AA5, 0xFFFF,
		0xFFFF, 0x1EE7, 0x3329, 0x5329, 0x5329, 0x5329, 0xB431, 0x1EE7,
		0xFFFF, 0xFFFF, 0xFFFF, 0x9DD6, 0xB439, 0x3329, 0x3329, 0x5329,
		0x9DD6, 0xFFFF, 0xFFFF, 0xFFFF, 0x3884, 0x3321, 0x5329, 0x3329,
		0xBBB5, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x776B, 0x3329, 0x3884, 0xFFFF,
		0xFFFF, 0xFFFF, 0xDFFF, 0x9552, 0x3329, 0x5329, 0x3329, 0xB431,
		0x776B, 0x5329, 0x9994, 0xFFFF, 0xFFFF, 0xB773, 0x3329, 0x5329,
		0x3329, 0x7CCE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x5EEF, 0x354A, 0x3329,
		0x5329, 0x3329, 0x1442, 0xBFF7, 0xBBB5, 0x3329, 0x3329, 0x3329,
		0x576B, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xBFF7, 0x554A,
		0x3329, 0x5329, 0x3329, 0x7994, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xDDDE, 0xF439, 0x5329,
		0x5329, 0x3329, 0x7329, 0xBFF7, 0xFFFF, 0x1EE7, 0x3329, 0x5329,
		0x5329, 0x5329, 0xB431, 0x1EE7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFDDE, 0x3542, 0x3329, 0x3329, 0x1542, 0x3EEF, 0xFFFF, 0xFFFF,
		0x1CC6, 0x5329, 0x5329, 0x3321, 0xF441, 0xDDDE, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x776B, 0x3329, 0x3884, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x9EF7,
		0x554A, 0x3329, 0x3329, 0x3329, 0x5329, 0x5329, 0x9994, 0xFFFF,
		0xFFFF, 0xD99C, 0x3329, 0x5329, 0x3329, 0x354A, 0x5EEF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xDFFF, 0xF65A, 0x3329, 0x5329, 0x3329, 0x754A, 0xBFF7,
		0x754A, 0x3329, 0x5329, 0xB431, 0x7EEF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0x3AAD, 0x3329, 0x5329, 0x3329, 0xD439,
		0x7EEF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xBFF7, 0x9652, 0x5329, 0x5329, 0x3329, 0xF441, 0xDFFF,
		0xFFFF, 0x1DE7, 0x3329, 0x3329, 0x3329, 0x3329, 0xB431, 0x1EE7,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x5EEF, 0x9773, 0x3329,
		0x3329, 0x554A, 0xFDDE, 0xFFFF, 0xBFF7, 0x598C, 0x7431, 0x3329,
		0x3329, 0x5329, 0xB439, 0xD439, 0xD439, 0xD439, 0xD439, 0xD439,
		0xD439, 0x354A, 0x9FF7, 0xFFFF, 0x576B, 0x3329, 0x3884, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x1EE7, 0x554A, 0x3329, 0x3329,
		0x3329, 0x3329, 0x9994, 0xFFFF, 0xFFFF, 0xDFFF, 0xD87B, 0x5329,
		0x3329, 0x3329, 0x7329, 0xD439, 0xD439, 0xD439, 0xD439, 0xD439,
		0xD439, 0xD439, 0x1442, 0x9EF7, 0xDDDE, 0x1542, 0xD439, 0xD439,
		0xD439, 0xD439, 0xD439, 0xD439, 0xD439, 0x9431, 0x3329, 0x3329,
		0x5329, 0xD439, 0x7BB5, 0xD99C, 0x3329, 0x3329, 0x3329, 0xD99C,
		0xFFFF, 0xFFFF, 0x9DD6, 0xF441, 0xD439, 0xD439, 0xD439, 0xD439,
		0x3329, 0x3329, 0x3329, 0x3329, 0xB439, 0xD439, 0xD439, 0xD439,
		0xD439, 0xD439, 0xD439, 0xD439, 0xD439, 0x7331, 0x3329, 0x3329,
		0x3329, 0x3542, 0xBDD6, 0xFFFF, 0xFFFF, 0xDFFF, 0x3EE7, 0x3EE7,
		0x3EE7, 0x3EE7, 0x3EE7, 0xDFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xDFFF, 0x7BAD, 0xB439, 0x3321, 0x9431, 0x7CCE,
		0xFFFF, 0xFFFF, 0x1EE7, 0x598C, 0x9652, 0x354A, 0x3542, 0x3542,
		0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x1AA5, 0xFFFF, 0xFFFF,
		0x1884, 0x3542, 0xB994, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0x5EEF, 0x776B, 0x354A, 0x3542, 0x3542, 0x1AA5, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xDDDE, 0x1884, 0x7552, 0x354A, 0x3542,
		0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0xBBB5, 0xFFFF,
		0xB994, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542,
		0x3542, 0x3542, 0x554A, 0x1663, 0x1AA5, 0x7EEF, 0x3EE7, 0x754A,
		0x3542, 0x3542, 0x354A, 0x7EEF, 0xFFFF, 0xFFFF, 0xB994, 0x3542,
		0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542,
		0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542, 0x3542,
		0x3542, 0x3542, 0x554A, 0x3663, 0x9BB5, 0xBFF7, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0x3EE7, 0x1884, 0x3329, 0x9431, 0x3AA5, 0xDFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x9DD6, 0x9773,
		0xB439, 0xF87B, 0x1EE7, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x7EEF, 0x798C, 0x7552, 0x1CC6,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0x9FF7, 0xFDDE, 0xDFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
		0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,
};

#pragma section