
#include <stdio.h>
#include <string.h>

#define LONGU 10
int main()
{
    double a;
    char nom[LONGU];
    printf("entre un nombre : ");
    fgets(nom, LONGU, stdin);
    a = strtod(nom, NULL);
    printf("le nombre est %lf ", a);
    return 0;
}