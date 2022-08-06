#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

void *init(void)
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));
  
    if(liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }
   
    element->value = 0;
    element->next = NULL;
    liste->first = element;

    liste->nubElements = 1;

    return liste;
}

void insertion(Liste *liste, int valeur)
{
    Element *new = malloc(sizeof(*new));

    if(liste == NULL || new == NULL)
    {
        exit(EXIT_FAILURE);
    }

    new->value = valeur;

    new->next = liste->first;
    liste->first = new;
    liste->nubElements += 1;
}

void suppr(Liste *liste)
{
    if(liste == NULL)
        exit(EXIT_FAILURE);
    
    if(liste->first != NULL)
    {
        Element *supElement = liste->first;

        liste->first = supElement->next;
        free(supElement);
        liste->nubElements -= 1;

    }
    

}

void affichage(Liste *liste)
{
    if(liste == NULL)
        exit(EXIT_FAILURE);

    Element *actuelle = liste->first;

    while(actuelle != NULL)
    {
        printf("%d -> ", actuelle->value);
        actuelle = actuelle->next;
    }
    printf("NULL\n");
    printf("la liste contien %d elements\n", liste->nubElements);

}

