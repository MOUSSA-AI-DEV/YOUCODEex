#ifndef HEAD_H
#define HEAD_H
#define  MAX_AIROPORTS 10
#define MAX_AVIONS 10
#define SIZE_WORD 50
#define EXIST_AERO 5

typedef struct
{
    int jour;
    int mois;
    int annee;
} Date;

typedef struct
{
    int idAvion;
    char modele[SIZE_WORD];
    int capacite;
    char statut[SIZE_WORD];
    Date dateEntree;
} Avion;

typedef struct
{
    int idAirport;
    char nom[SIZE_WORD];
    int nbAvions;
    Avion flotte[MAX_AVIONS];
} Airport;

Airport initAirport(int id, const char *nom,int aiero_exist);
Airport ajouterAvion(Airport a, const char *modele, int capacite, const char *statut, Date date);
Airport modifierAvion(Airport a, int idAvion, const char *modele, int capacite, const char *statut);
Airport supprimerAvion(Airport a, int idAvion);
void afficherAvions(Airport a,int aiero_exist);
void rechercherAvion(Airport a, int idAvion, const char *modele);
Airport trierAvions(Airport a, int critere);

#endif
