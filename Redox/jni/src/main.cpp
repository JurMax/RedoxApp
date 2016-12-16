/*
 * main.cpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#include "../overture/include/JOverture.hpp"
#include "redox/redoxmain.hpp"


int main( int argc, char* argv[] ) {

	if (Overture_Init()) {
		Overture_SetUpdateFunc((redoxmain::update));
		Overture_SetRenderFunc((redoxmain::render));

		Overture_Start();

		Overture_Close();
	}

}


