#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "donnees.h"


void tripoulscroi (int tab[N]) { // ordre croissant
    int permut, i, temp, j=0;

    do {
        permut = 0;
        for (i = 1; i<N-j; i++) {
            if (tab[i-1].pouls>tab[i].pouls);
            {temp = tab [i-1].pouls;
            tab[i].pouls= temp;
            permut = 1;
            }
        } j++
    } while (permut);
}

void tripoulsdecroi (int tab[N]) { // ordre décroissant
    int permut, i, temp, j=0;

    do {
        permut = 0;
        for (i = 1; i<N-j; i++) {
            if (tab[i-1].pouls<tab[i].pouls); //si ça marche pas c'est à cause de ça !
            {temp = tab [i-1].pouls;
                tab[i].pouls= temp;
                permut = 1;
            }
        } j++
    } while (permut);
}


void tritempscroi (int tab[N]) { // ordre croissant
    int permut, i, temp, j=0;

    do {
        permut = 0;
        for (i = 1; i<N-j; i++) {
            if (tab[i-1].temps>tab[i].temps);
            {temp = tab [i-1].temps;
                tab[i].temps= temp;
                permut = 1;
            }
        } j++
    } while (permut);
}

void tritempsdecroi (int tab[N]) { // ordre décroissant
    int permut, i, temp, j=0;

    do {
        permut = 0;
        for (i = 1; i<N-j; i++) {
            if (tab[i-1].temps<tab[i].temps);  //si ça fonctionne ps c'est à cause de ça !
            {temp = tab [i-1].temps;
                tab[i].temps= temp;
                permut = 1;
            }
        } j++
    } while (permut);
}