#include <stdio.h>
#include <string.h>
#include "head.h"

Airport initAirport(int id, const char *nom,int aero_exist)
{
    
    Airport a;
    a.idAirport = id;
    strcpy(a.nom, nom);
    a.nbAvions = 0;
    aero_exist++;
    return a;
}

Airport ajouterAvion(Airport a, const char *modele, int capacite, const char *statut, Date date)
{
    if (a.nbAvions >= MAX_AVIONS)
    {
        printf(" Flotte pleine, impossible ajouter.\n");
    }
    else
    {

        Avion av;
        int maxID = 0;
        for (int i = 0; i < a.nbAvions; i++)
        {
            if (a.flotte[i].idAvion > maxID)
            {
                maxID = a.flotte[i].idAvion;
            }
        }
        av.idAvion = maxID + 1;
        strcpy(av.modele, modele);
        av.capacite = capacite;
        strcpy(av.statut, statut);
        av.dateEntree = date;
        a.flotte[a.nbAvions] = av;
        a.nbAvions++;
         
        printf(" Avion ajoute avec ID %d\n", av.idAvion);
    }
    return a;
}


Airport modifierAvion(Airport a, int idAvion, const char *modele, int capacite, const char *statut)
{
    int found = 0;
    for (int i = 0; i < a.nbAvions; i++)
    {
        if (a.flotte[i].idAvion == idAvion)
        {
            if (modele && modele[0] != '\0')
            {
                strcpy(a.flotte[i].modele, modele);
            }
            if (capacite > 0)
            {
                a.flotte[i].capacite = capacite;
            }
            if (statut && statut[0] != '\0')
            {
                strcpy(a.flotte[i].statut, statut);
            }
            found = 1;
            printf(" Avion %d modifie.\n", idAvion);
            break;
        }
    }
    if (!found)
    {
        printf(" Avion %d introuvable.\n", idAvion);
    }
    return a;
}

Airport supprimerAvion(Airport a, int idAvion)
{
    int found = 0;
    for (int i = 0; i < a.nbAvions; i++)
    {
        if (a.flotte[i].idAvion == idAvion)
        {
            found = 1;
        }
        if (found && i < a.nbAvions - 1)
        {
            a.flotte[i] = a.flotte[i + 1];
        }
    }
    if (found)
    {
        a.nbAvions--;
        printf(" Avion %d supprime.\n", idAvion);
    }
    else
    {
        printf(" Avion %d introuvable.\n", idAvion);
    }
    return a;
}


void afficherAvions(Airport a,int aero_exist)
{
    printf("\n  Flotte de %s  \n", a.nom);
    for (int i = 0; i < a.nbAvions; i++)
    {
        Avion av = a.flotte[i];
        printf("ID:%d | Modele:%s | Capacite:%d | Statut:%s | Date:%02d/%02d/%d\n",
               av.idAvion, av.modele, av.capacite, av.statut,
               av.dateEntree.jour, av.dateEntree.mois, av.dateEntree.annee);
        printf("nbavion%d\n", a.nbAvions);
    printf("nomber of aiero know\n %d",aero_exist);

    }
}


void rechercherAvion(Airport a, int idAvion, const char *modele)
{
    int found = 0;
    for (int i = 0; i < a.nbAvions; i++)
    {
        Avion av = a.flotte[i];
        if (( av.idAvion == idAvion) ||
            (modele && strcmp(av.modele, modele) == 0))
        {
            printf(" Trouve -> ID:%d | Modele:%s | Capacite:%d | Statut:%s\n",
                   av.idAvion, av.modele, av.capacite, av.statut);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf(" Aucun avion trouve.\n");
    }
}


Airport trierAvions(Airport a, int critere)
{
    for (int i = 0; i < a.nbAvions - 1; i++)
    {
        for (int j = i + 1; j < a.nbAvions; j++)
        {
            int cmp = 0;
            if (critere == 1)
            {
                if (a.flotte[i].capacite > a.flotte[j].capacite)
                {
                    cmp = 1;
                }
            }
            else if (critere == 2)
            {
                if (strcmp(a.flotte[i].modele, a.flotte[j].modele) > 0)
                {
                    cmp = 1;
                }
            }
            if (cmp)
            {

                Avion tmp;
                tmp = a.flotte[i];
                a.flotte[i] = a.flotte[j];
                a.flotte[j] = tmp;
            }
        }
    }
    printf(" Flotte triee.\n");
    return a;
}
