#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "menu.h"
#include "donnees.h"



int menu () {
    int choice = 1;
    float num1, num2, R;
    printf("Bienvenue !\nMenu:\n\n1 - Afficher les données \n2 - Afficher les données en ordre croissant selon le pouls\n3 -  Afficher les données en ordre décroissant selon le pouls\n4 -  Afficher les données en ordre croissant selon le temps\n"
           "5 - Afficher les données en ordre décroissant selon le temps\n6 - Rechercher et afficher les données pour un temps particulier\n 7 - Afficher la moyenne de pouls dans une plage de temps \n");
    printf("8 - Afficher le nombre de lignes actuellement en mémoire\n 9 - Afficher le maximum de pouls\n 10 - afficher les minimum de pouls\n 11- Quitter le programme ")
    while (choice != 11) {
        printf("Que voulez vous faire ? : \t");
        scanf("%d", &choice);

        switch {
            case 1:
                printf("qqch"); //afficher les 2 tableaux Tableau[i].pouls et Tableau[i].temps
                break;

            case 2:
                //ordre croissant selon le pouls

                break;

            case 3:
                // ordre décroissant selon le pouls
                break;

            case 4:
                // ordre croissant selon le temps
                break;

            case 5:
                // ordre décroissant selon le temps
                break;

            case 6:
                //Rechercher et afficher les données pour un temps particulier
                break;

            case 7:
                //Afficher la moyenne de pouls dans une plage de temps
                break;

            case 8:
                //Afficher le nombre de lignes actuellement en mémoire
                break;

            case 9:
                //Afficher le maximum de pouls
                break;

            case 10:
                //Afficher le minimum de pouls
                break;
        }
    }
}