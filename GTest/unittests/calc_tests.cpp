#include <gtest/gtest.h>

#include "calculator.hpp"

TEST(CalcTest, AddTwoPositives)
{
    Calculator calcInstance;
    EXPECT_EQ(5, calcInstance.AddTwoNumbers(3, 2));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
