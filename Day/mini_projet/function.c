#include "header.h"
#include <stdio.h>
#include <string.h>
char FIELD[FIELDS][SIZE_WORD] = {"MODEL", "STATUS", "DATE"};
void create(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES], int capacite[PLANES])
{
   int i, j;
   int last_id = 0;
   for (i = 0; i < PLANES; i++)
   {
      if (strcmp(avion[i][0], "") != 0)
      {
         // le nombre compter
         if (ID[i] > last_id)
            last_id = ID[i];
      }
      // pou avoir le nombre debuter par 1
      else
      {
         ID[i] = last_id + 1;
      }
   }

   for (i = 0; i < PLANES; i++)
   {
      if (strcmp(avion[i][0], "") == 0)
      {
         printf("last id %d\n", last_id);
         // ID[i] = ID[i - 1] + 1;
         ID[i] = last_id + 1;
         last_id = ID[i];
         printf("the is%d\n", ID[i]);
         printf("Ajouter avion de ID %d\n", ID[i]);

         for (j = 0; j < FIELDS - 1; j++)
         {
            if (j == 2)
            {
               printf("enter the  format dd/mm/yy  of %s: ", FIELD[j]);
               scanf("%s", avion[i][j]);
            }
            else
            {
               printf("enter the %s: ", FIELD[j]);
               scanf("%s", avion[i][j]);
            }
            printf("enter the capacite:");
            scanf("%d", &capacite[i]);
         }
         break;
      }
   }
}
void modify(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES], int capacite[PLANES])
{
   int modify_element;
   printf("Enter the ID of the plane you want to modify  \n");
   if (scanf("%d", &modify_element) != 1)
   {
      printf("Invalid input \n");
      return;
   }

   for (int i = 0; i < PLANES; i++)
   {
      if (ID[i] == modify_element)
      {
         printf("Modify MODEL   :\n");
         scanf("%s", avion[i][0]);

         printf("Modify STATUS  :\n");
         scanf("%s", avion[i][1]);

         printf("Modify CAPACITE  :\n");
         scanf("%d", &capacite[i]);
         printf("Modify DATE  :\n");
         scanf("%s", avion[i][3]);

         printf("Plane with ID %d modified successfully.\n", modify_element);
         return;
      }
   }

   printf("Plane with ID %d not found.\n", modify_element);
}

void afficher(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES], int capacite[PLANES])
{
   for (int i = 0; i < PLANES; i++)
   {
      if (strcmp(avion[i][0], "") != 0)
      {
         printf("nuber %d", i);
         printf("id of element %d\n", ID[i]);
         printf("ID=%d | MODEL=%s | STATUS=%s | DATE=%s | CAPACITE %d \n", ID[i], avion[i][0], avion[i][1], avion[i][2], capacite[i]);
      }
   }
}
void SUPRIMER(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES], int capacite[PLANES])
{
   int delet_elemenet;
   printf("enter the plan that you want to dealte ");
   // pour valide inpute int
   if (scanf("%d", &delet_elemenet) != 1)
   {
      printf("invalid input.\n");
      return;
   }

   for (int i = 0; i < PLANES; i++)
   {
      if (ID[i] == delet_elemenet)
      {
         ID[i] = 0;
         for (int j = 0; j < FIELDS; j++)
         {
            if (strcmp(avion[i][j], "") != 0)
            {
               strcpy(avion[i][j], "");
               capacite[i] = 0;
            }
         }
      }
   }
}

void chercher_element(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES], int capacite[PLANES])
{

   int find_element;
   printf("enter ID of plant that you want:\n");
   if (scanf("%d", &find_element) != 1)
   {
      printf(("invalid iput\n"));
      return;
   }
   for (int i = 0; i < PLANES; i++)
   {
      if (ID[i] == find_element)
      {

         printf("ID=%d | MODEL=%s | STATUS=%s | DATE=%s | CAPACITE  %d \n", ID[i], avion[i][0], avion[i][1], avion[i][2], capacite[i]);
      }
      break;
   }
}

void sort_element(char avion[PLANES][FIELDS][SIZE_WORD], int ID[PLANES], int capacite[PLANES])
{
   int type_of_sorting;
   char store[FIELDS][SIZE_WORD];

   printf("What type of sorting you want?\n1: MODEL\n2: CAPACITE\n3: STATUS\n");
   if (scanf("%d", &type_of_sorting) != 1)
   {
      printf("Invalid input\n");
      return;
   }

   for (int i = 0; i < PLANES - 1; i++)
   {
      for (int j = 0; j < PLANES - i - 1; j++)
      {
         // Ignorer les lignes vides
         if (strcmp(avion[j][0], "") == 0 || strcmp(avion[j + 1][0], "") == 0)
            continue;

         int cmp = 0;

         if (type_of_sorting == 1)
         {
            cmp = strcmp(avion[j][0], avion[j + 1][0]);
         }
         else if (type_of_sorting == 2)
         {
            cmp = capacite[j] - capacite[j + 1];
         }
         else if (type_of_sorting == 3)
         {
            cmp = strcmp(avion[j][1], avion[j + 1][1]);
         }
         else
         {
            printf("Invalid choice\n");
            return;
         }

         if (cmp > 0)
         {

            for (int k = 0; k < FIELDS; k++)
            {
               strcpy(store[k], avion[j][k]);
               strcpy(avion[j][k], avion[j + 1][k]);
               strcpy(avion[j + 1][k], store[k]);
            }

            int tmpcap = capacite[j];
            capacite[j] = capacite[j + 1];
            capacite[j + 1] = tmpcap;

            int IDs = ID[j];
            ID[j] = ID[j + 1];
            ID[j + 1] = IDs;
         }
      }
   }
}
