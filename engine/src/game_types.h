#pragma once

#include "core/application.h"

/*
 * Represents the basic game state in a game.
 * Called for creation by the application
 */
typedef struct game {
    // The application configuration.
    application_config app_config;

    //function pointer to game's initialize fuction.
    b8 (*initialize)(struct game* game_inst);

    // Function pointer to game's update function
    b8 (*update)(struct game* game_inst, f32 delta_time);

    // Function pointer to game's render function.
    b8 (*render)(struct game* game_inst, f32 delta_time);

    // Function pointer to handle resizes, if applicable.
    // Left off on #006 22:24 Application Layer and Entry point
}