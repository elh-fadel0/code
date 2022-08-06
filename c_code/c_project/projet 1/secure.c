#include "securefonc.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{   //variable
    char nom[10];
    char prenom[10];
    char age;

    //traitement 
    printf("entrez voutre nom : ");
    lire(nom, 10);
    viderBuffer();
    printf("entrez votre prenom ");
    lire(prenom, 10);
    viderBuffer();
    printf("nom : %s \n", nom);
    printf("prenom : %s \n", prenom);

    return 0;
}