#include<stdio.h>
int main(void){

const float pi =3.14;
const int R=10;



const float volume=(4/3)*pi*R*R*R;
const float volumee=4.0f/3.0f*pi*R*R*R;
printf("%.3lf volume of cercel where 4/3      \n",volume);
printf("%.3lf volume of cercel where 4.0f/3.0f \n",volumee);
    return 0;
}