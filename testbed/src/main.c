#include <core/logger.h>
#include <core/asserts.h>

// TODO: Test
#include <platform/platform.h>

int main(void) {
    platform_state state;
    if(platform_startup(&state, "Velmora Engine Testbed", 100, 100, 1280, 720 )) {
        while(TRUE) {
            platform_pump_messages(&state);
        }
    }
    platform_shutdown(&state);

    return 0;
}