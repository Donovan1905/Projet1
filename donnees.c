#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "donnees.h"

//ICI CA PERMET DE LIRE LE FICHIER CSV WAWAWAWAWAWAWWAWAAAAAAAAAAAAAAAAAAW.
typedef struct Ligne {
    int temps;
    int pouls;
} Ligne;


int lect() {
    int car;
    int tempc = 0;
    int i = 0;
    int j = 0;
    int pas = 0;
    int temps[100];
    Ligne Tableau[100];
    FILE *File = fopen("Battements.csv", "r");
    do {
        car = fgetc(File);
        if (car == '\n') {
            i++;
        } else if (car == ';') {
            for (int k = j, l = 0; k >= 0; k--, l++) {
                tempc += temps[k] * pow(10, l);
            }
            if (pas == 0) {
                pas = 1;
                Tableau[i].temps = tempc;
                tempc = 0;
            } else {
                pas = 0;
                Tableau[i].pouls = tempc;
                tempc = 0;
            }
        } else if (car >= '0' && car <= '9') {
            temps[j] = car - '0';
            j++;
        } else {
            printf("Noooooooooooooooooon!");
        }
    } while (car != NULL);
    fclose(File);

    printf("%d", (char) Tableau[20].temps);
    scanf("%d", &car);
}