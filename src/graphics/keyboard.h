#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <SDL.h>

enum KeyMapping {
   MAP_ROTATION = SDLK_d,
   MAP_ROTATION_INVERTED = SDLK_q,
   POLY_MOVE_UP = SDLK_z,
   POLY_MOVE_DOWN = SDLK_s,
   SPEED_FALL = SDLK_SPACE,
   LEFT_POLY_ROTATION = SDLK_LEFT, //replace with mouse
   RIGHT_POLY_ROTATION = SDLK_RIGHT,
   INVERT_ROTATION = SDLK_LCTRL,
   MENU = SDLK_ESCAPE,

   KEY_COUNT = 8,
};

#endif