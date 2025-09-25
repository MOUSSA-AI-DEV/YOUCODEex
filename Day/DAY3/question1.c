#include <stdio.h>
#include <stdbool.h>
int main()
{
    
    bool digit_seen[10] = {false};
    int numbers[10];
    // bool indice = false ;
    int digit, i;
    long n;
    printf("entre un nombre\n");
    scanf("%ld", &n);
    i = 0;
    while (n > 0)
    {

        digit = n % 10;

        if (digit_seen[digit] == false)
        {
            digit_seen[digit] = true;
            n /= 10;
        }
        else
        {
            if (digit_seen[digit] == true)
            {
                for (int j = 0; j < i; j++)
                {
                    
                   
                        numbers[i] = digit;
                    
               
                    printf("%d\n", numbers[i]);
                    n /= 10;
                    i++;
                };
            };
        }
        printf("%di\n", i);
        if (n == 0)
        {
            //     for (int j=0; j<i; j++){

            //     printf("%d\n", numbers[j]);
            // }
        }
  }}