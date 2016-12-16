/*
 * resources.cpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#include <JResources.hpp>

#include <JRenderer.hpp>


namespace texture {
	JTexture gPortraitTexture;
	JTexture gLandscapeTexture;
}



namespace resources {
	bool load() {
		bool success = true;

		//Load splash texture
		if(!texture::gPortraitTexture.loadFromFile("hello.bmp")){
			SDL_Log("Failed to load splash texture!\n");
			success = false;
		}

		return success;
	}

	void free() {
		texture::gPortraitTexture.free();
		texture::gLandscapeTexture.free();
	}
}



JTexture::JTexture() {
	tTexture = NULL;
	tWidth = 0;
	tHeight = 0;
	tPixels = NULL;
	tPitch = 0;
}

JTexture::~JTexture() {
	free();
}


void JTexture::free() {
	if (tTexture != NULL) {
		SDL_DestroyTexture( tTexture );
		tTexture = NULL;
		tWidth = 0;
		tHeight = 0;
		tPixels = NULL;
		tPitch = 0;
	}
}


bool JTexture::loadFromFile( std::string path ) {
	free();

	string texturepath;
	string platform = SDL_GetPlatform();
	if (platform != "Android" && platform != "iOS") {
		texturepath = SDL_GetBasePath();
		texturepath += "../assets/" + path;
	} else {
		texturepath = path;
	}

	SDL_Surface* loadedSurface = SDL_LoadBMP(texturepath .c_str());
	SDL_Texture* newTexture = NULL;

	if (loadedSurface == NULL) {
		SDL_Log( "Unable to load image %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
	}
	else {
		SDL_Surface* formattedSurface = SDL_ConvertSurfaceFormat(loadedSurface, SDL_PIXELFORMAT_RGBA8888, 0);
		if (formattedSurface == NULL) {
			SDL_Log( "Unable to convert loaded surface to display format! %s\n", SDL_GetError() );
		}
		else {
			newTexture = SDL_CreateTexture(rRenderer, SDL_PIXELFORMAT_RGBA8888,
					SDL_TEXTUREACCESS_STREAMING, formattedSurface->w, formattedSurface->h);
			if(newTexture == NULL) {
				SDL_Log( "Unable to create blank texture! SDL Error: %s\n", SDL_GetError() );
			}
			else {
				SDL_SetTextureBlendMode( newTexture, SDL_BLENDMODE_BLEND );
				SDL_LockTexture( newTexture, &formattedSurface->clip_rect, &tPixels, &tPitch );
				memcpy( tPixels, formattedSurface->pixels, formattedSurface->pitch * formattedSurface->h );

				tWidth = formattedSurface->w;
				tHeight = formattedSurface->h;

				Uint32* pixels = (Uint32*)tPixels;
				int pixelCount = (tPitch / 4) * tHeight;

				Uint32 colorKey = SDL_MapRGB(formattedSurface->format, 0, 0xFF, 0xFF);
				Uint32 transparent = SDL_MapRGBA(formattedSurface->format, 0x00, 0xFF, 0xFF, 0x00);

				for (int i = 0; i < pixelCount; ++i) {
					if (pixels[i] == colorKey) {
						pixels[i] = transparent;
					}
				}

				SDL_UnlockTexture(newTexture);
				tPixels = NULL;
			}
			SDL_FreeSurface(formattedSurface);
		}
		SDL_FreeSurface(loadedSurface);
	}
	tTexture = newTexture;
	return tTexture != NULL;
}


void JTexture::setColor( int red, int green, int blue ) {
	SDL_SetTextureColorMod(tTexture, red, green, blue);
}
void JTexture::setBlendMode( SDL_BlendMode blending ) {
	SDL_SetTextureBlendMode(tTexture, blending);
}
void JTexture::setAlpha( int alpha ) {
	SDL_SetTextureAlphaMod(tTexture, alpha);
}


void JTexture::render( int x, int y, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip ) {
	SDL_Rect renderQuad = { x, y, tWidth, tHeight };

	if (clip != NULL) {
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}

	SDL_RenderCopyEx(rRenderer, tTexture, clip, &renderQuad, angle, center, flip);
}


