#include<stdio.h>
int main()
{


const float pi =3.14;
float R;
printf("enter the the value of R of cerel\n");
scanf("%f",&R);


const float volume=(4/3)*pi*R*R*R;
const float volumee=4.0f/3.0f*pi*R*R*R;
printf("%.3f volume of cercel where 4/3      \n",volume);
printf("%.3f volume of cercel where 4.0f/3.0f \n",volumee);
   

    return 0;
}