#include <stdio.h>

int factorial(int value)
{
    if (value == 1 || value == 0)
        return 1;
    int sum = value;
    for (int i = value - 1; i > 0; i--)
    {

        sum *= i;
    }
    return sum;
}
main()
{
    int value = 9;

    printf("%d! = %d", value, factorial(value));
}