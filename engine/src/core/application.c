#include "application.h"

#include "logger.h"
#include "platform/platform.h"

typedef struct application_state {
    b8 is_running;
    b8 is_suspended;
    platform_state platform;
    i16 width;
    i16 height;
    f64 last_time;
} application_state;

static b8 initialized = FALSE;
static application_state app_state;

b8 application_create(application_config* config) {
    if (initialized) {
        VERROR("application_create called more than once.");
        return FALSE;
    }

    // initialize subsystems
    initialize_logging();

    // TODO: Remove this
    VFATAL("A test message: %f", 3.14f);
    VERROR("A test message: %f", 3.14f);
    VWARN("A test message: %f", 3.14f);
    VINFO("A test message: %f", 3.14f);
    VDEBUG("A test message: %f", 3.14f);
    VTRACE("A test message: %f", 3.14f);

    app_state.is_running = TRUE;
    app_state.is_suspended = FALSE;

    
    if(!platform_startup(
            &app_state.platform, 
            config->name, 
            config->start_pos_x, 
            config->start_pos_y, 
            config->start_height, 
            config->start_width )) {
        return FALSE;
    }
    initialized = TRUE;

    return TRUE;
    
}

b8 application_run() {
    while(TRUE) {
        platform_pump_messages(&state);
    }

    platform_shutdown(&state);
}