#include <stdio.h>
int main(){
int n1,n2, pgcdn, min, max;
printf("enter the two number\n");
scanf("%d %d",&n1,&n2);
if( n1<n2){
    min=n1;
    max=n2;
}
else{
    min=n2;
    max=n1;
}
for(int i=1;i<=min;i++){
    if(max%i==0&&min%i==0)
pgcdn=i;
}
printf("le pgcd est %d",pgcdn);

    return 0;
}