#include <cstdio>

int absolute_value(int x)
{
    if (x >= 0) return x;
    else return x * -1;
}

int main()
{
    int my_number = -10;
    printf("The absolute value of %d is %d.\n", my_number, absolute_value(my_number));
}