/*
 * renderer.hpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#ifndef SRC_REDOX_SUPPORT_RENDERER_HPP_
#define SRC_REDOX_SUPPORT_RENDERER_HPP_

#include <JResources.hpp>

extern SDL_Window* rWindow;
extern SDL_Renderer* rRenderer;

extern SDL_Rect jScreenRect;
extern SDL_Color clearColor;


namespace renderer {
	//void renderTexture( JTexture texture, int posx, int posy, int width, int height, float angle = 0.0 );
}


int Renderer_Init();


#endif /* SRC_REDOX_SUPPORT_RENDERER_HPP_ */
