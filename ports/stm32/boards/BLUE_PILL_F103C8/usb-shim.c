#include "py/objstr.h"

mp_uint_t pyb_usb_flags = 0;

void pyb_usb_init0(void) { }
void pyb_usb_dev_deinit(void) { }
int usb_vcp_recv_byte(uint8_t *c) { return 0 ;}
bool usb_vcp_is_enabled(void) { return false;}
void usb_vcp_send_strn(const char *str, int len) {}