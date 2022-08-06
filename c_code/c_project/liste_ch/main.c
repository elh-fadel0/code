#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Liste *liste = init();

    insertion(liste, 3);
    insertion(liste, 7);
    insertion(liste, 9);
    insertion(liste, 11);

    affichage(liste);
    

    suppr(liste);
    suppr(liste);

    affichage(liste);
  


    return 0;
}