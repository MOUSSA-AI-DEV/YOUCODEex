#include<stdio.h>
int main()
{
    float montant;
    int a,b,c,d,e,f,g;


printf("entrer le montant en dollar\n");
scanf("%f",& montant);
a=montant/20;
b=(montant-a*20);
c=b/10;
d=(b-c*10);
e=d/5;
f=(d-e*5);
g=f/1;
printf(" billets de 20 est %d \n",a);
printf(" billets de 10 est %d \n",c);
printf(" billets de 0 est %d \n",e);
printf(" billets de 3 est %d \n",g);

}