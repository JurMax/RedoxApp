/*
 * JOverture.hpp
 *
 *  Created on: 12 nov. 2016
 *      Author: jurriaanvandenberg
 */

#ifndef OVERTURE_JOVERTURE_HPP_
#define OVERTURE_JOVERTURE_HPP_

#include <string>
#include <SDL.h>
#include <SDL_log.h>

#include <JInput.hpp>


extern std::string Overture_CurrentOS;

extern float Overture_WindowWidth;
extern float Overture_WindowHeight;

int Overture_Init();
void Overture_Close();

void Overture_SetUpdateFunc( void (*f)() );
void Overture_SetRenderFunc( void (*f)() );

void Overture_Start();
bool Overture_IsRunning();
void Overture_Stop();

bool Overture_IsMobile();



/**
 * TODO-lijst
 *
 * OpenGL renderer
 * 	Primitives, multiple shaders, etc.
 * Framerate/updates
 * Inputs (mouse/touch)
 * Menus
 * Bezier-curves
 */

#endif /* OVERTURE_JOVERTURE_HPP_ */
