#include <cstdio>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int first_number = 4;
    int second_number = 5;
    printf("The sum of %d and %d is %d.\n", first_number, second_number, sum(first_number, second_number));
}