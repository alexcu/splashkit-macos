/*
 * SplashKit Animations
 *
 * This file is generated from the SplashKit source.
 * Modifying it will cause failures.
 *
 */

#ifndef __animations_h
#define __animations_h
#include "types.h"

#include <string>
using std::string;


int animation_count(animation_script script);
int animation_current_cell(animation anim);
vector_2d animation_current_vector(animation anim);
bool animation_ended(animation anim);
bool animation_entered_frame(animation anim);
float animation_frame_time(animation anim);
int animation_index(animation_script script, string name);
string animation_name(animation temp);
string animation_script_name(animation_script script);
animation_script animation_script_named(string name);
void assign_animation(animation anim, animation_script script, int idx);
void assign_animation(animation anim, animation_script script, int idx, bool with_sound);
void assign_animation(animation anim, animation_script script, string name);
void assign_animation(animation anim, animation_script script, string name, bool with_sound);
void assign_animation(animation anim, string script_name, string name);
void assign_animation(animation anim, string script_name, string name, bool with_sound);
animation create_animation(animation_script script, int idx, bool with_sound);
animation create_animation(animation_script script, string name);
animation create_animation(animation_script script, string name, bool with_sound);
animation create_animation(string script_name, int idx);
animation create_animation(string script_name, string name);
animation create_animation(string script_name, string name, bool with_sound);
void free_all_animation_scripts();
void free_animation(animation ani);
void free_animation_script(animation_script script_to_free);
void free_animation_script(string name);
bool has_animation_named(animation_script script, string name);
bool has_animation_script(string name);
animation_script load_animation_script(string name, string filename);
void restart_animation(animation anim);
void restart_animation(animation anim, bool with_sound);
void update_animation(animation anim, float pct, bool with_sound);
void update_animation(animation anim);
void update_animation(animation anim, float pct);

#endif /* __animations_h */
