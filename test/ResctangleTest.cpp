#include "gtest/gtest.h"
#include "Rectangle.h"

TEST(Rectangle, get_area)
{
    Rectangle* r1 = new Rectangle(5, 10);
    ASSERT_EQ(r1->get_area(), 50);
}

TEST(Rectangle, get_perimeter)
{
    Rectangle* r1 = new Rectangle(5, 10);
    ASSERT_EQ(r1->get_perimeter(), 30);
}
