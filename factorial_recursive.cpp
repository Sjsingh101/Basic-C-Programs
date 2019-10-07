#include <stdio.h>

int factorial(int value)
{
    if (value == 1 || value == 0)
        return 1;
    else
        return (value * factorial(value - 1));
}
main()
{
    int value = 9;

    printf("%d! = %d", value, factorial(value));
}