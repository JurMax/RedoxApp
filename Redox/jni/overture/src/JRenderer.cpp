/*
 * renderer.cpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#include <JRenderer.hpp>
#define GL3_PROTOTYPES 1

/*#ifdef __ANDROID__
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#else
#include <OpenGL/gl.h>
#endif*/
#include <SDL_opengl.h>


SDL_Window* rWindow = NULL;
SDL_Renderer* rRenderer = NULL;
SDL_GLContext glContext;

SDL_Rect jScreenRect = { 0, 0, 480, 360 };

SDL_Color clearColor = { 0xFF, 0xFF, 0xFF, 0xFF };

namespace renderer {
	//void
	//http://lazyfoo.net/tutorials/SDL/51_SDL_and_modern_opengl/
}


int Renderer_Init() {
	bool succes = true;
	/*
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	glContext = SDL_GL_CreateContext(rWindow);

	//glewExperimental = GL_TRUE;
	//glewInit();

	/*rRenderer = SDL_CreateRenderer(rWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if(rRenderer == NULL) {
		SDL_Log("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
	}
	else {
		SDL_SetRenderDrawColor(rRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
	}

	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    //glBindBuffer( GL_ELEMENT_ARRAY_BUFFER, 0);
    //glEnableVertexAttribArray( 0 );

	// Swaps the buffer
	SDL_GL_SwapWindow(rWindow);*/

	return succes;
}
