/*
 * SplashKit Mouse Input
 *
 * This file is generated from the SplashKit source.
 * Modifying it will cause failures.
 *
 */

#ifndef __mouse_input_h
#define __mouse_input_h
#include "types.h"

#include <string>
using std::string;


typedef enum {
    NO_BUTTON,
    LEFT_BUTTON,
    MIDDLE_BUTTON,
    RIGHT_BUTTON,
    MOUSE_X1_BUTTON,
    MOUSE_X2_BUTTON
} mouse_button;
void hide_mouse();
bool mouse_clicked(mouse_button button);
bool mouse_down(mouse_button button);
vector_2d mouse_movement();
point_2d mouse_position();
vector_2d mouse_position_vector();
bool mouse_shown();
bool mouse_up(mouse_button button);
vector_2d mouse_wheel_scroll();
float mouse_x();
float mouse_y();
void move_mouse(float x, float y);
void move_mouse(point_2d point);
void show_mouse();
void show_mouse(bool show);

#endif /* __mouse_input_h */
