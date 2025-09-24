#include<stdio.h>
int main(){
int number ,x,y,z;
    printf("entre number of twoo digits");
    scanf("%d",&number);
    if(number >10){
        x=number % 10;
        y=number-x;
        z=y/10;
         printf(" the number is reversed of %d c est %d%d \n",number,x,z);
    };
    return 0;
}