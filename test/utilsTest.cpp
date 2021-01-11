#include "gtest/gtest.h"
#include "utils.h"

TEST(utils, add)
{
    float result = 0.0;
    result = add(5.0, 6.0);
    ASSERT_NEAR(result, 11.0, 1.0e-11);
}

TEST(utils, subtract)
{
    ASSERT_EQ(subtract(7.0, 4.0), 3.0);
}

TEST(utils, multiply)
{
    ASSERT_EQ(multiply(8.0, 3.0), 24.0);
}
