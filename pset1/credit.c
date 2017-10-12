#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Number: ");
    long long card = get_long_long();
    int digits = 0;
    int card_digits = 0;
    long long card_double = card;
    int checker = 0;
    int dig_1, dig_2, dig_3, dig_4, dig_5, dig_6, dig_7, dig_8 = 0;
    
    while (card_double > 0)
    {
        card_double = card_double / 10;
        card_digits = card_digits + 1;
    }
    
    if ((card_digits !=13) && (card_digits != 15) && (card_digits != 16))
    {
        printf("INVALID\n");
    } 
    else if (card_digits == 15)
    {
        if (card / 10000000000000 == 34 || card / 10000000000000 == 37)
        {
            dig_7 = (card / 10) % 10; 
            dig_6 = (card / 1000) % 10;
            dig_5 = (card / 100000) % 10;
            dig_4 = (card / 10000000) % 10;
            dig_3 = (card / 1000000000) % 10;
            dig_2 = (card / 100000000000) % 10;
            dig_1 = (card / 10000000000000) % 10;
            
            dig_7 *= 2;
            dig_6 *= 2;
            dig_5 *= 2;
            dig_4 *= 2;
            dig_3 *= 2;
            dig_2 *= 2;
            dig_1 *= 2;
            
            if (dig_1 == 10) 
            {
                dig_1 = 1;
            } else if (dig_1 == 12)
            {
                dig_1 = 3;
            } else if (dig_1 == 14)
            {
                dig_1 = 5;
            } else if (dig_1 == 16)
            {
                dig_1 = 7;
            } else if (dig_1 == 18)
            {
                dig_1 = 9;
            }
            
              if (dig_2 == 10) 
            {
                dig_2 = 1;
            } else if (dig_2 == 12)
            {
                dig_2 = 3;
            } else if (dig_2 == 14)
            {
                dig_2 = 5;
            } else if (dig_2 == 16)
            {
                dig_2 = 7;
            } else if (dig_2 == 18)
            {
                dig_2 = 9;
            }
           
              if (dig_3 == 10) 
            {
                dig_3 = 1;
            } else if (dig_3 == 12)
            {
                dig_3 = 3;
            } else if (dig_3 == 14)
            {
                dig_3 = 5;
            } else if (dig_3 == 16)
            {
                dig_3 = 7;
            } else if (dig_3 == 18)
            {
                dig_3 = 9;
            }
            
            
              if (dig_4 == 10) 
            {
                dig_4 = 1;
            } else if (dig_4 == 12)
            {
                dig_4 = 3;
            } else if (dig_4 == 14)
            {
                dig_4 = 5;
            } else if (dig_4 == 16)
            {
                dig_4 = 7;
            } else if (dig_4 == 18)
            {
                dig_4 = 9;
            }
            
            
              if (dig_5 == 10) 
            {
                dig_5 = 1;
            } else if (dig_5 == 12)
            {
                dig_5 = 3;
            } else if (dig_5 == 14)
            {
                dig_5 = 5;
            } else if (dig_5 == 16)
            {
                dig_5 = 7;
            } else if (dig_5 == 18)
            {
                dig_5 = 9;
            }
            
            
              if (dig_6 == 10) 
            {
                dig_6 = 1;
            } else if (dig_6 == 12)
            {
                dig_6 = 3;
            } else if (dig_6 == 14)
            {
                dig_6 = 5;
            } else if (dig_6 == 16)
            {
                dig_6 = 7;
            } else if (dig_6 == 18)
            {
                dig_6 = 9;
            }
            
            
            if (dig_7 == 10) 
            {
                dig_7 = 1;
            } 
            else if (dig_7 == 12)
            {
                dig_7 = 3;
            } 
            else if (dig_7 == 14)
            {
                dig_7 = 5;
            } 
            else if (dig_7 == 16)
            {
                dig_7 = 7;
            } 
            else if (dig_7 == 18)
            {
                dig_7 = 9;
            }
            
            checker = dig_1 + dig_2 + dig_3 + dig_4 + dig_5 + dig_6 + dig_7;
            
            while (card > 0)
            {
                digits = card % 10;
                checker = checker + digits;
                card = card / 100;
            }
            if (checker % 10 == 0)
            {
                printf("AMEX\n");
            }
                
            
            
            
            
            
            
        } else {
            printf("INVALID\n");
        }
        
    } 
    else if (card_digits == 16)
    {
        if (card / 100000000000000 == 51 || card / 100000000000000 == 52 || card / 100000000000000 == 53 || card / 100000000000000 == 54 || card / 100000000000000 == 55)
        {
            
            dig_8 = (card / 10) % 10;
            dig_7 = (card / 1000) % 10;
            dig_6 = (card / 100000) % 10;
            dig_5 = (card / 10000000) % 10;
            dig_4 = (card / 1000000000) % 10;
            dig_3 = (card / 100000000000) % 10;
            dig_2 = (card / 10000000000000) % 10;
            dig_1 = (card / 1000000000000000) % 10;
            
            dig_8 *= 2;
            dig_7 *= 2;
            dig_6 *= 2;
            dig_5 *= 2;
            dig_4 *= 2;
            dig_3 *= 2;
            dig_2 *= 2;
            dig_1 *= 2;
            
             if (dig_1 == 10) 
            {
                dig_1 = 1;
            } else if (dig_1 == 12)
            {
                dig_1 = 3;
            } else if (dig_1 == 14)
            {
                dig_1 = 5;
            } else if (dig_1 == 16)
            {
                dig_1 = 7;
            } else if (dig_1 == 18)
            {
                dig_1 = 9;
            }
            
              if (dig_2 == 10) 
            {
                dig_2 = 1;
            } else if (dig_2 == 12)
            {
                dig_2 = 3;
            } else if (dig_2 == 14)
            {
                dig_2 = 5;
            } else if (dig_2 == 16)
            {
                dig_2 = 7;
            } else if (dig_2 == 18)
            {
                dig_2 = 9;
            }
           
              if (dig_3 == 10) 
            {
                dig_3 = 1;
            } else if (dig_3 == 12)
            {
                dig_3 = 3;
            } else if (dig_3 == 14)
            {
                dig_3 = 5;
            } else if (dig_3 == 16)
            {
                dig_3 = 7;
            } else if (dig_3 == 18)
            {
                dig_3 = 9;
            }
            
            
              if (dig_4 == 10) 
            {
                dig_4 = 1;
            } else if (dig_4 == 12)
            {
                dig_4 = 3;
            } else if (dig_4 == 14)
            {
                dig_4 = 5;
            } else if (dig_4 == 16)
            {
                dig_4 = 7;
            } else if (dig_4 == 18)
            {
                dig_4 = 9;
            }
            
            
              if (dig_5 == 10) 
            {
                dig_5 = 1;
            } else if (dig_5 == 12)
            {
                dig_5 = 3;
            } else if (dig_5 == 14)
            {
                dig_5 = 5;
            } else if (dig_5 == 16)
            {
                dig_5 = 7;
            } else if (dig_5 == 18)
            {
                dig_5 = 9;
            }
            
            
              if (dig_6 == 10) 
            {
                dig_6 = 1;
            } else if (dig_6 == 12)
            {
                dig_6 = 3;
            } else if (dig_6 == 14)
            {
                dig_6 = 5;
            } else if (dig_6 == 16)
            {
                dig_6 = 7;
            } else if (dig_6 == 18)
            {
                dig_6 = 9;
            }
            
            
            if (dig_7 == 10) 
            {
                dig_7 = 1;
            } 
            else if (dig_7 == 12)
            {
                dig_7 = 3;
            } 
            else if (dig_7 == 14)
            {
                dig_7 = 5;
            } 
            else if (dig_7 == 16)
            {
                dig_7 = 7;
            } 
            else if (dig_7 == 18)
            {
                dig_7 = 9;
            }
            
            if (dig_8 == 10) 
            {
                dig_8 = 1;
            } 
            else if (dig_8 == 12)
            {
                dig_8 = 3;
            } 
            else if (dig_8 == 14)
            {
                dig_8 = 5;
            } 
            else if (dig_8 == 16)
            {
                dig_8 = 7;
            } 
            else if (dig_8 == 18)
            {
                dig_8 = 9;
            }
            
            checker = dig_1 + dig_2 + dig_3 + dig_4 + dig_5 + dig_6 + dig_7 + dig_8;
            
            while (card > 0)
            {
                digits = card % 10;
                checker = checker + digits;
                card = card / 100;
            }
            if (checker % 10 == 0)
            {
                printf("MASTERCARD\n");
            } 
        } else if (card / 1000000000000000 == 4)
        {
            dig_8 = (card / 10) % 10;
            dig_7 = (card / 1000) % 10;
            dig_6 = (card / 100000) % 10;
            dig_5 = (card / 10000000) % 10;
            dig_4 = (card / 1000000000) % 10;
            dig_3 = (card / 100000000000) % 10;
            dig_2 = (card / 10000000000000) % 10;
            dig_1 = (card / 1000000000000000) % 10;
            
            dig_8 *= 2;
            dig_7 *= 2;
            dig_6 *= 2;
            dig_5 *= 2;
            dig_4 *= 2;
            dig_3 *= 2;
            dig_2 *= 2;
            dig_1 *= 2;
            
             if (dig_1 == 10) 
            {
                dig_1 = 1;
            } else if (dig_1 == 12)
            {
                dig_1 = 3;
            } else if (dig_1 == 14)
            {
                dig_1 = 5;
            } else if (dig_1 == 16)
            {
                dig_1 = 7;
            } else if (dig_1 == 18)
            {
                dig_1 = 9;
            }
            
              if (dig_2 == 10) 
            {
                dig_2 = 1;
            } else if (dig_2 == 12)
            {
                dig_2 = 3;
            } else if (dig_2 == 14)
            {
                dig_2 = 5;
            } else if (dig_2 == 16)
            {
                dig_2 = 7;
            } else if (dig_2 == 18)
            {
                dig_2 = 9;
            }
           
              if (dig_3 == 10) 
            {
                dig_3 = 1;
            } else if (dig_3 == 12)
            {
                dig_3 = 3;
            } else if (dig_3 == 14)
            {
                dig_3 = 5;
            } else if (dig_3 == 16)
            {
                dig_3 = 7;
            } else if (dig_3 == 18)
            {
                dig_3 = 9;
            }
            
            
              if (dig_4 == 10) 
            {
                dig_4 = 1;
            } else if (dig_4 == 12)
            {
                dig_4 = 3;
            } else if (dig_4 == 14)
            {
                dig_4 = 5;
            } else if (dig_4 == 16)
            {
                dig_4 = 7;
            } else if (dig_4 == 18)
            {
                dig_4 = 9;
            }
            
            
              if (dig_5 == 10) 
            {
                dig_5 = 1;
            } else if (dig_5 == 12)
            {
                dig_5 = 3;
            } else if (dig_5 == 14)
            {
                dig_5 = 5;
            } else if (dig_5 == 16)
            {
                dig_5 = 7;
            } else if (dig_5 == 18)
            {
                dig_5 = 9;
            }
            
            
              if (dig_6 == 10) 
            {
                dig_6 = 1;
            } else if (dig_6 == 12)
            {
                dig_6 = 3;
            } else if (dig_6 == 14)
            {
                dig_6 = 5;
            } else if (dig_6 == 16)
            {
                dig_6 = 7;
            } else if (dig_6 == 18)
            {
                dig_6 = 9;
            }
            
            
            if (dig_7 == 10) 
            {
                dig_7 = 1;
            } 
            else if (dig_7 == 12)
            {
                dig_7 = 3;
            } 
            else if (dig_7 == 14)
            {
                dig_7 = 5;
            } 
            else if (dig_7 == 16)
            {
                dig_7 = 7;
            } 
            else if (dig_7 == 18)
            {
                dig_7 = 9;
            }
            
            if (dig_8 == 10) 
            {
                dig_8 = 1;
            } 
            else if (dig_8 == 12)
            {
                dig_8 = 3;
            } 
            else if (dig_8 == 14)
            {
                dig_8 = 5;
            } 
            else if (dig_8 == 16)
            {
                dig_8 = 7;
            } 
            else if (dig_8 == 18)
            {
                dig_8 = 9;
            }
            
            checker = dig_1 + dig_2 + dig_3 + dig_4 + dig_5 + dig_6 + dig_7 + dig_8;
            
            while (card > 0)
            {
                digits = card % 10;
                checker = checker + digits;
                card = card / 100;
            }
            if (checker % 10 == 0)
            {
                printf("VISA\n");
            }
        } else {
            printf("INVALID\n");
        }
    }
    else if (card_digits == 13)
    {
        if (card / 1000000000000 == 4)
        {
            dig_6 = (card / 10) % 10;
            dig_5 = (card / 1000) % 10;
            dig_4 = (card / 100000) % 10;
            dig_3 = (card / 10000000) % 10;
            dig_2 = (card / 1000000000) % 10;
            dig_1 = (card / 100000000000) % 10;
            
            dig_6 *= 2;
            dig_5 *= 2;
            dig_4 *= 2;
            dig_3 *= 2;
            dig_2 *= 2;
            dig_1 *= 2;
            
             if (dig_1 == 10) 
            {
                dig_1 = 1;
            } else if (dig_1 == 12)
            {
                dig_1 = 3;
            } else if (dig_1 == 14)
            {
                dig_1 = 5;
            } else if (dig_1 == 16)
            {
                dig_1 = 7;
            } else if (dig_1 == 18)
            {
                dig_1 = 9;
            }
            
              if (dig_2 == 10) 
            {
                dig_2 = 1;
            } else if (dig_2 == 12)
            {
                dig_2 = 3;
            } else if (dig_2 == 14)
            {
                dig_2 = 5;
            } else if (dig_2 == 16)
            {
                dig_2 = 7;
            } else if (dig_2 == 18)
            {
                dig_2 = 9;
            }
           
              if (dig_3 == 10) 
            {
                dig_3 = 1;
            } else if (dig_3 == 12)
            {
                dig_3 = 3;
            } else if (dig_3 == 14)
            {
                dig_3 = 5;
            } else if (dig_3 == 16)
            {
                dig_3 = 7;
            } else if (dig_3 == 18)
            {
                dig_3 = 9;
            }
            
            
              if (dig_4 == 10) 
            {
                dig_4 = 1;
            } else if (dig_4 == 12)
            {
                dig_4 = 3;
            } else if (dig_4 == 14)
            {
                dig_4 = 5;
            } else if (dig_4 == 16)
            {
                dig_4 = 7;
            } else if (dig_4 == 18)
            {
                dig_4 = 9;
            }
            
            
              if (dig_5 == 10) 
            {
                dig_5 = 1;
            } else if (dig_5 == 12)
            {
                dig_5 = 3;
            } else if (dig_5 == 14)
            {
                dig_5 = 5;
            } else if (dig_5 == 16)
            {
                dig_5 = 7;
            } else if (dig_5 == 18)
            {
                dig_5 = 9;
            }
            
            
              if (dig_6 == 10) 
            {
                dig_6 = 1;
            } else if (dig_6 == 12)
            {
                dig_6 = 3;
            } else if (dig_6 == 14)
            {
                dig_6 = 5;
            } else if (dig_6 == 16)
            {
                dig_6 = 7;
            } else if (dig_6 == 18)
            {
                dig_6 = 9;
            }
            
            checker = dig_1 + dig_2 + dig_3 + dig_4 + dig_5 + dig_6;
            
            while (card > 0)
            {
                digits = card % 10;
                checker = checker + digits;
                card = card / 100;
            }
            if (checker % 10 == 0)
            {
                printf("VISA\n");
            }
            } 
            else 
            {
                printf("INVALID\n");
            }
        }
    return 0;
}
