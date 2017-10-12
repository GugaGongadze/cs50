#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    while (true)
    {
        printf("Height: ");
        int height = get_int();
        
        if (height < 0 || height > 22)
        {
            printf("");
        } 
        else 
        {
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < height - i - 1; j++)
                {
                    printf(" ");
                }
                
                for (int k = height - 1; k < height + i + 1; k++)
                {
                    printf("#");
                }
                
            printf("\n");
            }
            
            
            break;
        }
    }
}