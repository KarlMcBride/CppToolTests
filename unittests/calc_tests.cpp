#include <gtest/gtest.h>

// Example flagged by cppclean, as it cannot find "calculator.hpp".
// Using <calculator.hpp> or "../src/calculator.hpp" resolves this.
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
