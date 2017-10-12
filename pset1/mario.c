#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    while (true)
    {
        printf("Height: ");
        int height = get_int();
        
        if (height < 0 || height > 23)
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
                
                for (int k = height - 1; k < height + i; k++)
                {
                    printf("#");
                }
                
                printf("  ");
                
                for (int l = height - 1; l < height + i; l++)
                {
                    printf("#");
                }
            
            printf("\n");
            }
            
            
            break;
        }
    }
}