#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("X is ");
    int x = get_int();
    
    printf("Y is ");
    int y = get_int();
    
    printf("%i plus %i is %i.\n",x, y, x + y);
    printf("%i minus %i is %i.\n",x, y, x - y);
    printf("%i times %i is %i.\n",x, y, x * y);
    printf("%i divided by %i is %i.\n",x, y, x / y);
    printf("Remainder of %i divided by %i is %i.\n", x, y, x % y);
}