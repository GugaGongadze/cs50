#include <cs50.h>
#include <stdio.h>

void displayResult(int i);

int main(void)
{
    printf("Minutes: ");
    int bot = get_int();
    displayResult(bot);
}

void displayResult(int i)
{
    i = i * 12;
    printf("Bottles: %i\n", i);
}