/*
 * resources.hpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#ifndef SRC_REDOX_SUPPORT_RESOURCES_HPP_
#define SRC_REDOX_SUPPORT_RESOURCES_HPP_

#include <stdio.h>
#include <iostream>
#include <vector>
#include <SDL_log.h>
#include <SDL.h>

using namespace std;

class JTexture;


namespace texture {
	extern JTexture gPortraitTexture;
	extern JTexture gLandscapeTexture;
}


namespace resources {
	bool load();
	void free();
}


class JTexture
{
	public:
		JTexture();
		~JTexture();

		void free();
		bool loadFromFile( std::string path );

		void setColor( int red, int green, int blue );
		void setBlendMode( SDL_BlendMode blending );
		void setAlpha( int alpha );

		void render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE );

	private:
		SDL_Texture* tTexture;
		void* tPixels;
		int tPitch;

		int tWidth;
		int tHeight;
};


#endif /* SRC_REDOX_SUPPORT_RESOURCES_HPP_ */


