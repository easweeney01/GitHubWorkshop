#include "Shape.h"

Shape::Shape(float width = 0, float height = 0) {
    this->width = width;
    this->height = height;
}

Shape::~Shape() {

}

float Shape::getWidth() const {
    return width;
}

void Shape::setWidth(float width) {
    this->width = width;
}
	
float Shape::getHeight() const {
    return height;
}

void Shape::setHeight(float height) {
    this->height = height;
}