/*
 * container.cpp
 *
 *  Created on: 13 okt. 2016
 *      Author: jurriaanvandenberg
 */

#include "container.hpp"


Container::Container() {
	printf("ding");
	width = 200;
	height = 200;
	posX = 200;
	posY = 200;
}


void Container::print() {
	cout << TEST << endl;

	Point point = Point(2.0, 3.0);
	cout << point.distance(Point(3.0,3.0)) << endl;

	Point point2;
	cout << point2.distance(Point(3.0,3.0)) << endl;
}


double Point::distance(const Point& other) const {
	double dx = x - other.x;
	double dy = y - other.y;
	return sqrt(dx * dx + dy * dy);
}

