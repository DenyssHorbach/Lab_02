#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width(10), height(10), x(0), y(0) {}

Rectangle::Rectangle(double width, double height, double x, double y) {
    this->width = width;
    this->height = height;
    this->x = x;
    this->y = y;
}

Rectangle::Rectangle(const Rectangle& other) {}


Rectangle::~Rectangle() {}

double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

double Rectangle::get_width() const {
    return width;
}

double Rectangle::get_height() const {
    return height;
}

double Rectangle::get_x() const {
    return x;
}

double Rectangle::get_y() const {
    return y;
}