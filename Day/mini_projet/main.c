#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void menu(char avion[PLANES][FIELDS][SIZE_WORD],int ID[PLANES],int capacite[PLANES] );
int main()
{
    
 char avion[PLANES][FIELDS][SIZE_WORD] = 
                              {
                              {"m102", "disponible", "4/5/2005"},
                              {"m102", "en maintenance", "4/5/2005"},
                              {"m102", "en vol", "4/5/2005"},
                              {"m102", "en vol", "4/5/2005"},
                              {"m102", "disponible", "4/5/2005"}
                            };
                            int ID[PLANES] = {1, 2, 3, 4, 5};
                            int capacite[PLANES]={80,40,59,10,84};

    menu(avion,ID, capacite);
    return 0;
}



void menu(char avion[PLANES][FIELDS][SIZE_WORD],int ID[PLANES], int capacite[PLANES])
{
      int nombre_operation;
  
    do
    {
        
        printf("Enter operation you want to do in stock:\n");
        printf("1: create\n2: update\n3: supprimer\n4: afficher\n5: chrcher_element\n6:sorte\n0:Exit\n");
        scanf("%d", &nombre_operation);
        system("cls");
  
        switch (nombre_operation)
        {
        case 1:

            create(avion,ID,capacite);
            printf("Create ");
            break;

        case 2:
            modify(avion, ID,capacite);

            break;

        case 3:
            SUPRIMER(avion,ID,capacite);

            break;

        case 4:
            afficher(avion,ID,capacite);

            break;
        case 5:
            chercher_element(avion,ID,capacite);

            break;
        case 6:
            sort_element(avion,ID,capacite);

            break;

        case 0:
            printf("Thalla ");
            return;

        default:
        }
    } while (nombre_operation !=0);
}