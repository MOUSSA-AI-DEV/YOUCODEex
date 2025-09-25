#include<stdio.h>
#include <stdlib.h>
int main(){
int hours,minute,i; 
int array[10];
int indice=0;
int date_arrive[]={10*60 + 16, 11*60 + 52, 13*60 + 31, 15*60 + 0,
                       16*60 + 8, 17*60 + 55, 21*60 + 20, 23*60 + 58};
int date_depart[]={8*60 + 0, 9*60 + 43, 11*60 + 19, 12*60 + 47,
                         14*60 + 0, 15*60 + 45, 19*60 + 0, 21*60 + 45};



printf("entre heur de depart possible ");
scanf("%d:%d", &hours , &minute);
int hour_user=(hours*60)+minute;
printf("hour %d minute %d les heurs user %d\n",hours ,minute,hour_user);

for(i=0;i<8;i++){
  array[i] = abs(date_depart[i] - hour_user);


     printf("%d\n",array[i]);
};


int min=array[0];

for(int j=0;j<8;j++)
{
if( min > array[j]){
    min = array[j];
    indice=j;

}

}
printf("la date plus convenable de dpart   cest %d:%d \n",date_depart[indice]/60,date_depart[indice]%60);
printf("la date arrive cest%d:%d\n",date_arrive[indice]/60,date_arrive[indice]%60);


    return 0;
}
