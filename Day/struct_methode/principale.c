#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include <string.h>

int main()
{
    int aiero_exist=EXIST_AERO;
 Airport airports[MAX_AIROPORTS] = {
        {1, "Mohammed V", 1, {{1, "m102", 70, "vol", {20, 1, 2005}}}},
        {2, "Sala",       1, {{2, "m102", 70, "en vol", {10, 1, 2003}}}},
        {3, "Menara",     1, {{4, "m102", 70, "en vol", {30, 1, 2002}}}},
        {4, "Massira",    1, {{5, "m102", 70, "maintenance", {9, 1, 2001}}}}
    };
    // Initialisation de 4 aéroports
     Airport airports6 = initAirport(6, " Mohammed1 V",aiero_exist);
    Airport airports7 = initAirport(7, "sala2"     ,aiero_exist  );
    Airport airports8 = initAirport(8, " Menara3",aiero_exist);
    Airport airports9 = initAirport(9, " Massira4",aiero_exist);

    int choix;
    printf("Choisir aeroport  :\n1: Mohammed V\n2: sala\n3: Menara\n4: Massira\n");
    scanf("%d", &choix);
   
    Airport current;
    if (choix == 6)
    {
        current = airports6;
    }
    else if (choix == 7)
    {
        current = airports7;
    }
    else if (choix == 8)
    {
        current = airports8;
    }
    else if (choix == 9)
    {
        current = airports9;
    }
    else if (choix<6)
    {
        current = airports[choix];
    }
    
    else
    {
        printf("Choix invalide.\n");
        return 1;
    }

    int operation = -1;
    while (operation != 0)
    {
        printf("\nOperations disponibles :\n");
        printf("1: a jouter avion\n2: modifier avion\n3: Supprimer avion\n4: Afficher flotte\n5: Rechercher avion\n6: Trier flotte\n0: quitter\n");
        scanf("%d", &operation);

        if (operation == 1)
        {
            char modele[SIZE_WORD], statut[SIZE_WORD];
            int capacite;
            Date d;
            printf("Modele : ");
            scanf("%s", modele);
            printf("Capacite : ");
            scanf("%d", &capacite);
            printf("Statut : ");
            scanf("%s", statut);
            printf("Date (dd mm yyyy) : ");
            scanf("%d/%d/%d", &d.jour, &d.mois, &d.annee);
        
            current = ajouterAvion(current, modele, capacite, statut, d);
        }
        else if (operation == 2)
        {
            int id, capacite;
            char modele[SIZE_WORD], statut[SIZE_WORD];
            printf("ID avion a modifier : ");
            scanf("%d", &id);
            printf("Nouveau modele  : ");
            scanf("%s", modele);
            printf("Nouvelle capacite : ");
            scanf("%d", &capacite);
            printf("Nouveau statut  : ");
            scanf("%s", statut);
            current = modifierAvion(current, id, modele, capacite, statut);
        }
        else if (operation == 3)
        {
            int id;
            printf("ID avion a supprimer : ");
            scanf("%d", &id);
            current = supprimerAvion(current, id);
        }
        else if (operation == 4)
        {
            afficherAvions(current,aiero_exist);
        }
        else if (operation == 5)
        {
            int id;
            char modele[SIZE_WORD];
            printf("ID avion : ");
            scanf("%d", &id);
            printf("Modele: ");
            scanf("%s", modele);
            if (modele[0] == '\0')
            {
                strcpy(modele, NULL);
            }
            rechercherAvion(current, id, modele);
        }
        else if (operation == 6)
        {
            int critere;
            printf("Trier par : 1=Capacite, 2=Modele : ");
            scanf("%d", &critere);
            current = trierAvions(current, critere);
        }
        else if (operation == 0)
        {
            printf(" sir fhalek 0\n");
        }
        else
        {
            printf(" option invalide.\n");
        }
    }

    return 0;
}
