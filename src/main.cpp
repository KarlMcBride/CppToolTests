#include <iostream>

#include <calculator.hpp>

int main()
{
    Calculator calcInstance;
    int result = calcInstance.AddTwoNumbers(3, 2);
    std::cout << "Result: " << result << std::endl;
    return 0;
}