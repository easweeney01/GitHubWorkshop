#include "Rectangle.h"

Rectangle::Rectangle(float width, float height) {
	setWidth(width);
	setHeight(height);
}

Rectangle::~Rectangle() {
	//
}

float Rectangle::getArea() const {
	return(width * height);
}