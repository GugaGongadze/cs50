#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("X is ");
    int x = get_int();
    
    printf("Y is ");
    int y = get_int();
    
    printf("Sum of X and Y is %i\n", x + y);
}