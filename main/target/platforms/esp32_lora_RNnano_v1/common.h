#include <hal/gpio.h>

#define LED_1_GPIO 16 // Only difference with TTGO is LED pin
#define LED_1_USE_PWM

// User button
#define BUTTON_1_GPIO 0

// Buzzer
#define BEEPER_GPIO 12

// SX127X
#define SX127X_SPI_BUS VSPI_HOST
#define SX127X_GPIO_SCK 25
#define SX127X_GPIO_MISO 27
#define SX127X_GPIO_MOSI 26
#define SX127X_GPIO_CS 33
#define SX127X_GPIO_RST 32
#define SX127X_GPIO_DIO0 18

#define SX127X_OUTPUT_TYPE SX127X_OUTPUT_PA_BOOST

#define HAL_GPIO_USER_BASE_MASK (HAL_GPIO_M(1) | HAL_GPIO_M(3) | HAL_GPIO_M(11) | HAL_GPIO_M(13) | HAL_GPIO_M(14))

#define HAL_GPIO_USER_MASK HAL_GPIO_USER_BASE_MASK

#define TX_DEFAULT_GPIO 14
#define RX_DEFAULT_GPIO 13

#define TX_UNUSED_GPIO 2
#define RX_UNUSED_GPIO 35
