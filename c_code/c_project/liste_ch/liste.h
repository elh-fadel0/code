#ifndef __liste_h__
#define __liste_h__

typedef struct Element Element;
struct Element
{
    int value;
    Element *next;
};

typedef struct Liste Liste;
struct Liste
{
    int nubElements;
    Element *first;
    };


void *init(void);
void insertion(Liste *liste, int valeur);
void affichage(Liste *liste);
void suppr(Liste *liste);

#endif
