#include <stdio.h>

int main(void)
{
    for (int index = 1; index < 10; index++)
    {
        if (index % 2 == 0)
        {
            printf("%d is divisible by 2\n", index);
        }
        if (index % 3 == 0)
        {
            printf("%d is divisible by 3\n", index);
        }
        if (index % 11 == 0)
        {
            printf("%d is divisible by 11\n", index);
        }
    }

    return 0;
}
