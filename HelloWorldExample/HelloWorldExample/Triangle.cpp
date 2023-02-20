#include "Triangle.h"

Triangle::Triangle(float width = 0, float height = 0) {
    this->width = width;
    this->height = height;
}

Triangle::~Triangle() {

}

float Triangle::getArea() const {
    return width * height / 2;
}