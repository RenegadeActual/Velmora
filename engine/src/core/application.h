#pragma once

#include "defines.h"

// Application Configuration.
typedef struct application_config {
    // Windows starting postion x axis, if applicable
    i16 start_pos_x;

    // Windows starting position y axis, if applicable
    i16 start_pos_y;

    // Windows starting width, if applicable
    i16 start_width;

    // Windows starting height, if applicable
    i16 start_height;

    // The application name used in windowing, if applicable
    char* name;
} application_config;

VAPI b8 application_create(application_config* config);

VAPI b8 application_run();