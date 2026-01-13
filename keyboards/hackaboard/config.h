#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    SHLOK
#define PRODUCT         HACKABOARD
#define DESCRIPTION     SEX HACKABOARD

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins - GP pins for Raspberry Pi Pico 2W */
#define MATRIX_ROW_PINS { GP2, GP3, GP4, GP5, GP6 }
#define MATRIX_COL_PINS { GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21 }

/* I2C pins for OLED on Raspberry Pi Pico 2W */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP0
#define I2C1_SCL_PIN GP1

#define OLED_FONT_H "keymaps/default/glcdfont.c"

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// #define TAPPING_TERM 200

#define ENCODERS_PAD_A { GP26 }
#define ENCODERS_PAD_B { GP27 }
#define ENCODER_RESOLUTION 4

#define MIDI_BASIC

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define DISABLE_LEADER

/*enable midi slider*/
// #define POT_ENABLE

/*enable right shift+2 email address marco*/
#define EMAIL_ENABLE
#ifdef EMAIL_ENABLE
	#define EMAIL_ADDRESS "shlok@163.com"
#endif

/*sequence for ctrl, win and alt*/
#define MOD_SEQUENCE_CAW /*normally for macos users*/
// #define MOD_SEQUENCE_CWA /*normally for windows users*/

/*other sequences*/
//#define MOD_SEQUENCE_WAC
//#define MOD_SEQUENCE_WCA
//#define MOD_SEQUENCE_AWC
//#define MOD_SEQUENCE_ACW


