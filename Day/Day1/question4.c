#include<stdio.h>
int main()
{
    float price;
    float taxeajouter;
printf(" enter the price en dollar \n ");


scanf("%f",& price);


taxeajouter=price*5/100+price;


printf("%.3f le prix est\n ",price);
printf("%.3f le prix avec tax est: $",taxeajouter);
    return 0;
}