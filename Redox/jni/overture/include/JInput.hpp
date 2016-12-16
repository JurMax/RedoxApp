//
//  inputhandler.hpp
//  2d-game
//
//  Created by Jurriaan van den Berg on 10-04-16.
//  Copyright © 2016 JurMax. All rights reserved.
//

#ifndef inputhandler_hpp
#define inputhandler_hpp

#include <stdio.h>
#include <iostream>
#include <SDL.h>
#include <JKeys.hpp>
#include <JVector.hpp>

using namespace std;


bool isKeyDown( JKey code );
bool isKeyPressed( JKey code );

/** Directly after mouse/touch down */
bool isScreenPressed();
bool isAreaPressed(float posX = 0.0, float posY = 0.0, float width = 99999.9, float height = 99999.9);
bool isAreaDown(float posX, float posY, float width, float height);
/** When mouse/touch is pressed (isAreaBeingClicked) and released (isAreaClicked) from same area */
bool isAreaClicked(float posX, float posY, float width, float height);
bool isAreaBeingClicked(float posX, float posY, float width, float height);


string getInputLine();
bool isTyping();



namespace inputhandeling {

    void handleEvents();
    
    void handleKeyInput( SDL_Event e );
    void addKey( JKey key );
    void removeKey( JKey key );

    void handlePointerInput( SDL_Event e );
}


class InputPointer {
public:
	InputPointer() {
		active = false;
		fingerID = 0;
		down = false;
		pressed = false;
		released = false;
		position = Vector2(0, 0);
		pressedPosition = Vector2(0, 0);
		releasedPosition = Vector2(0, 0);
	}

	bool active;
	SDL_FingerID fingerID;

	/** This inputpointer will become inactive if down equals false */
	bool down;
	bool pressed;
	bool released;

	/** positions are normalised (0 to 1) */
	Vector2 position;
	Vector2 pressedPosition;
	Vector2 releasedPosition;

};

extern InputPointer pointers[16];




#endif /* inputhandler_hpp */
