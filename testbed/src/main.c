#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    VFATAL("A test message: %f", 3.14f);
    VERROR("A test message: %f", 3.14f);
    VWARN("A test message: %f", 3.14f);
    VINFO("A test message: %f", 3.14f);
    VDEBUG("A test message: %f", 3.14f);
    VTRACE("A test message: %f", 3.14f);
   
    VASSERT(1 == 0);

    return 0;
}