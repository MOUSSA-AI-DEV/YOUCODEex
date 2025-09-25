#include<stdio.h>
int main(){
char ISBN[18];
char GSI[4],identif_groupe[2],code_editeur[4];
char numero_darticle[6],chifrre_controle[2];
printf("enter your ISBN") ;

 fgets(ISBN,sizeof(ISBN),stdin);

int values=sscanf(ISBN,"%3s-%1s-%3s-%5s-%1s",&GSI,&identif_groupe,&code_editeur,&numero_darticle,&chifrre_controle);

printf("your ISBN %s\n Prefixe GS1 %s \n Identifiant de groupe :%s \n Code de lediteur : %s \n Numero d article %s \n Chiffre de controle :%s ",ISBN,identif_groupe,code_editeur,numero_darticle,chifrre_controle);

    return 0;
}
