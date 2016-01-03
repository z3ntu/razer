#ifndef RAZER_HW_KRAKEN_CHROMA_H
#define RAZER_HW_KRAKEN_CHROMA_H

#include "razer_private.h"

int razer_kraken_chroma_init(struct razer_mouse *m,
                             struct libusb_device *udev);
void razer_kraken_chroma_release(struct razer_mouse *m);

#endif //RAZER_HW_KRAKEN_CHROMA_H
