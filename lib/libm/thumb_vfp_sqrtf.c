// an implementation of sqrtf for Thumb using hardware VFP instructions

#include <math.h>

#if !defined(MCU_SERIES_F1)
float sqrtf(float x) {
    asm volatile (
            "vsqrt.f32  %[r], %[x]\n"
            : [r] "=t" (x)
            : [x] "t"  (x));
    return x;
}
#else
float sqrtf(float x) {
    return 0;
}
#endif
