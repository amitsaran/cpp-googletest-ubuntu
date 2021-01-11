#include "gtest/gtest.h"
#include "Square.h"

TEST(Square, get_area)
{
    Square* r1 = new Square(5);
    ASSERT_EQ(r1->get_area(), 25);
}

TEST(Square, get_perimeter)
{
    Square* r1 = new Square(10);
    ASSERT_EQ(r1->get_perimeter(), 40);
}
