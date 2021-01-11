#include "Square.h"

Square::Square(const float side)
: side(side){
    std::cout << "Square(const float side) - Constructor";
}

float Square::get_area(){
    return (this->side*this->side);
}

float Square::get_perimeter(){
    return 4*this->side;
}
