#include "heder.h"
#include <stdio.h>
#include <stdlib.h>
void menu();
int main()
{

    menu();
    return 0;
}


void menu(){
    int nombre_operation;
    char avion[][] = {{"1", "m102", "200", "disponible","4/5/2005"},
                      {"2", "m102", "201", "en maintenance","4/5/2005"},
                      {"3", "m102", "202", "en vol","4/5/2005"},
                      {"4", "m102", "203", "en vol","4/5/2005"},
                      {"5", "m102", "204", "disponible","4/5/2005"}};


    do
    {
    printf("enter opertaion that you want to d in sotck\n1:create\n2:update\n 3:supprimer\n 4:afficher\n0: Exit");
    scanf("%d",&nombre_operation);

        system("cls");
         
    switch (nombre_operation)
    {
    case 1:
        // create()
        printf("Create ");
         break;

    case 2:
        // update() 
        printf("Update");
        
        break;

    case 3:
        // supprimer()
        printf("Delete ");
        
        break;

    case 4:
        // afficher()
        printf("Show ");
        
        break;

    case 0:
        // afficher()
        printf("Thalla ");
        return;

    default:


    }
    } while (1);
}