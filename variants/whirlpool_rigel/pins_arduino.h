#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

// WIN serial

#define WIN_TX 27
#define WIN_RX 37

// MCU serial

#define MCU_TX 26
#define MCU_RX 38

// Wakeup pins

static const uint8_t WKUP_WIN	= 36;	// WIN message interrupt input
static const uint8_t WKUP_IN	= 39;	// Interrupt from MCU
static const uint8_t WKUP_OUT	= 15;	// Interrupt to MCU

// Audio

static const uint8_t I2S_DAT	= 2;	// Audio amp data
static const uint8_t I2S_BCLK	= 0;	// Audio amp clock
static const uint8_t I2S_LRCK	= 4;	// Audio amp frame select

// ILI9341 display panel (VSPI)

static const uint8_t DISP_SS    = 5;	// SPI slave select
static const uint8_t DISP_MOSI  = 23;	// SPI data to LCD
static const uint8_t DISP_MISO  = 19;	// SPI data from LCD
static const uint8_t DISP_SCK   = 18;	// SPI clock
static const uint8_t DISP_DC	= 33;	// Data/Command
static const uint8_t DISP_RST	= 25;	// Reset
static const uint8_t DISP_TE	= 34;	// Tearing effect
static const uint8_t DISP_BL_EN	= 32;	// Backlight enable

#endif /* Pins_Arduino_h */
