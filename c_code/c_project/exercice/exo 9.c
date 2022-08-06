#include <stdio.h>
#include <complex.h>
int main ()
{
    double complex x;
    double complex y;
    double complexe somme;
    printf("entre un nombre complexe : ");
    scanf("%lf",x);
    printf("entre une autre nombre complexe : ");
    scanf("%lf",y);
    somme = x +y;
    printf("la somme des deux complex est %lf + %lf", creal(somme), cimag(somme));

    return 0;
}











