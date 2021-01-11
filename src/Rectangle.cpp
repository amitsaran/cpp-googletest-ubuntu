#include "Rectangle.h"

Rectangle::Rectangle(const float width, const float length)
:width(width), length(length){
    std::cout << "Rectangle::Rectangle(float width, float length) - Constructor";
}

float Rectangle::get_area(){
    return this->width*this->length;
}

float Rectangle::get_perimeter(){
    return 2*(this->width+this->length);
}