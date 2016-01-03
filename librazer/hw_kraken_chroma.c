//
// Created by luca on 1/2/16.
//

#include "hw_kraken_chroma.h"
#include <stdint.h>
#include <string.h>


struct kraken_chroma_rgb_color
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

enum kraken_chroma_led_mode {
    KRAKEN_CHROMA_LED_MODE_STATIC = 0x00,
    KRAKEN_CHROMA_LED_MODE_BREATHING = 0x00,
    KRAKEN_CHROMA_LED_MODE_SPECTRUM = 0X00,
    KRAKEN_CHROMA_LED_MODE_OFF = 0x00,
};

struct kraken_chroma_led
{
    enum kraken_chroma_led_mode mode;
    struct kraken_chroma_rgb_color color;
};



int razer_kraken_chroma_init(struct razer_mouse *m,
                             struct libusb_device *usbdev)
{
    printf("Init of hw_kraken_chroma");
    return 0;
}
void razer_kraken_chroma_release(struct razer_mouse *m)
{
    printf("Release of hw_kraken_chroma");
}