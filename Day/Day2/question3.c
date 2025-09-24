#include<stdio.h>
int main(){
int hours,minute,i; 
int array[10];
int indice;
float date_arrive[10]={10.16,11.52,13.31,15.00,16.08,17.55,18.20,11.58};
float date_depart[10]={8,9.43,11.19,12.47,14.00,15.45,19,21.45};





printf("entre heur de depart possible ");
scanf("%d:%d", &hours , &minute);
int hour_user=(hours*60)+minute;
printf("hour %d minute %d les heurs user %d\n",hours ,minute,hour_user);

for(i=0;i<8;i++){
    if((date_depart[i]*60 - hour_user)<0){
       array[i]=-(date_depart[i]*60 - hour_user);

    } else {

        array[i]=date_depart[i]*60 - hour_user;
      }10
     printf("%d\n",array[i]);
};


float min=0;

for(int j=0;j<8;j++)
{
if( min < array[j]){
    min = array[j];
    indice=j;

}

}
printf("la date plus convenable de dpart   cest %.2f \n",date_depart[indice]);
printf("la date arrive cest%.2f\n",date_arrive[indice]);


    return 0;
}