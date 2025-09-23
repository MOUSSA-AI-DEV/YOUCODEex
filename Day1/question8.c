#include<stdio.h>
int main(){
float montant  ;
float payment_mensuel;
float taux_interet;


printf("entrer montant ");
scanf("%f",&montant);
printf("entrer payment mensuel ");
scanf("%f", &payment_mensuel);
printf("saisir le taux   d intrer");
scanf("%f",&taux_interet);

taux_interet=((taux_interet/100)/12);

for( int  i=0;i<12;i++  ) {
montant=montant+taux_interet-payment_mensuel;

printf("montant de mois %d c est %f\n",i+1,montant);
  
};

    return 0;
}