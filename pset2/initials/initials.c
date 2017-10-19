#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // Get the input from the user
    string s = get_string();
    // Convert the first letter to uppercase
    printf("%c", toupper(s[0]));
    // Loop through the length of the input
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        // To find the letters for initials
        // they have to have an empty string
        // from the left and a NUL value from the right.
        if ((s[i] == ' ') && ((s[i] + 1) != '\0'))
        {
            printf("%c", toupper(s[i + 1]));    
        }
    }
    printf("\n");
}
