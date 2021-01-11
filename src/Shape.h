#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape{	// This is the base class!

	public:
		Shape();
		
        virtual float get_area() = 0;
        virtual float get_perimeter() = 0;

	private:
        Shape(const Shape& temp_obj)  {   } 
        Shape& operator=(const Shape& temp_obj)   {   } 

		float area, perimeter;

};

#endif      //SHAPE_H
