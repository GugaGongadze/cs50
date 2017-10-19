#include <stdio.h>

int add_two_ints(int a, int b);

int main(void)
{
    int z = add_two_ints(5, 8);
    printf("%i\n", z);
}

int add_two_ints(int a, int b)
{
    return a + b;
}