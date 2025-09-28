

#define PLANES 100
#define FIELDS 4
#define SIZE_WORD 20

// Prototypes
void create(char avion[PLANES][FIELDS][SIZE_WORD],int ID[PLANES],int capacite[PLANES]);
void modify(char avion[PLANES][FIELDS][SIZE_WORD],int ID[PLANES],int capacite[PLANES]);
void SUPRIMER(char avion[PLANES][FIELDS][SIZE_WORD],int ID[PLANES],int capacite[PLANES]);
void afficher(char avion[PLANES]  [FIELDS][SIZE_WORD],int ID[PLANES],int capacite[PLANES]);
void chercher_element(char avion[PLANES]  [FIELDS][SIZE_WORD],int ID[PLANES],int capacite[PLANES]);
void sort_element(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES],int capacite[PLANES]);

  