#define USE_SCREEN

// OLED screen connections
#define SCREEN_I2C_BUS I2C_NUM_1
#define SCREEN_GPIO_SDA 22
#define SCREEN_GPIO_SCL 23
// We don't use the OLED RST pin because it causes reboots on some boards
// (probably due to some incorrect wiring)
#define SCREEN_GPIO_RST HAL_GPIO_NONE
#define SCREEN_I2C_ADDR 0x3c
