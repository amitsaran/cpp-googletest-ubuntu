#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape{
    public:
        Rectangle(const float width, const float length);
        float get_area();
        float get_perimeter();

    private:
        float width;
        float length;
};

#endif  // RECTANGLE_H
