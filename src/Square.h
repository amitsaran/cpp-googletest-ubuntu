#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape{
    public:
        Square(const float side);
        float get_area();
        float get_perimeter();

    private:
        float side;
};

#endif //SQUARE_H
