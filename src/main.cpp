#include <iostream>

#include "calculator.hpp"

// Example flagged by cppclean, as it expects a header to define this.
// Using the static keyword means its a private function.
int doubler(int numeric)
{
    return numeric * 2;
}

int main()
{
    int number = 5;
    doubler(number);
    std::cout << "doubled number:" << number << std::endl;

    Calculator calcInstance;
    int result = calcInstance.AddTwoNumbers(3, 2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
