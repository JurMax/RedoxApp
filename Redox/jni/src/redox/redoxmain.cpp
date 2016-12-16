/*
 * redoxmain.cpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#include "redoxmain.hpp"


Redox redoxMain;


Redox::Redox() {
}


void redoxmain::update() {

}


void redoxmain::render() {

	static bool isMoving = false;
	static bool fromLeft = true;
	static float tmovement = 0;

	if (isKeyDown(KEY_SPACE)) {
		SDL_SetRenderDrawColor(rRenderer, 0, 0xFF, 0xFF, 0xFF);
	}
	else {
		SDL_SetRenderDrawColor(rRenderer, 0xFF, 0, 0xFF, 0xFF);
		//SDL_Rect rectvalue = { 0, 0, 100, 500 };
		//rectding = &rectvalue;
	}

	float speed = 0.02;
	if (isMoving) {
		if (fromLeft) {
			tmovement += speed;
			if (tmovement >= 1.0) {
				tmovement = 1.0;
				isMoving = false;
				fromLeft = false;
			}
		}
		else {
			tmovement -= speed;
			if (tmovement <= 0.0) {
				tmovement = 0.0;
				isMoving = false;
				fromLeft = true;
			}
		}
	}


	int posX = 300;
	int posY = 50;
	float distance = 300;

	SDL_Color color = { 0x30, 0xCF, 0x63, 0xFF };
	clearColor = color;

	Bezier bezier1 = Bezier(Vector2(1, 0), Vector2(0, 1));
	bezier1.render(10, posY, 190, 190);
	texture::gPortraitTexture.render(posX + tmovement*distance, posY);
	if (isAreaClicked(posX + tmovement*distance, posY, 128, 128)) {
		isMoving = !isMoving;
	}
	if (isAreaBeingClicked(posX + tmovement*distance, posY, 128, 128)) {
		SDL_Color color2 = { 0xCC, 0x33, 0x00, 0xFF };
		clearColor = color2;
	}

	posY += 150;
	texture::gPortraitTexture.render(posX + bezier1.getVectorValue(tmovement).y*distance, posY);
	if (isAreaDown(posX + bezier1.getVectorValue(tmovement).y*distance, posY, 128, 128)) {
		SDL_Color color2 = { 0x40, 0xA2, 0xBF, 0xFF };
		clearColor = color2;
	}
	posY += 250;

	Bezier bezier2 = Bezier(Vector2(0, 0), Vector2(0, 1));
	bezier2.render(10, posY, 190, 190);
	//texture::gPortraitTexture.render(posX + bezier2.getVectorValue(tmovement).x*distance, posY);
	//posY += 150;
	texture::gPortraitTexture.render(posX + bezier2.getFloatValue(tmovement)*distance, posY);
	posY += 150;


	//texture::gPortraitTexture.render(posX + tmovement*200, posY-200);
	//texture::gPortraitTexture.render(posX + CalculateBezierPoint(tmovement, p0, p12, p2, p3).x, posY+200);



    for (int i = 0; i < 16; i++) {
    	if (pointers[i].active) {
    		float posX = pointers[i].position.x * Overture_WindowWidth - 64;
    		float posY = pointers[i].position.y * Overture_WindowHeight - 64;

    		SDL_SetRenderDrawColor(rRenderer, 0, 0xFF, 0, 0xFF);
    		texture::gPortraitTexture.render(posX, posY);

    		if (i == 0) {
        		texture::gPortraitTexture.render(posX+20, posY+20);
    		}
    	}
    	else {
    		break;
    	}
    }
}



