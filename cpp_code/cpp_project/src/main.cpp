#include "../include/dyn.hpp"
#include <iostream>
#include <new>

using namespace std;

int main()
{
    int **tab;
    int i, a, b;

    cout << "entrer le nombre de ligne de la matrice : ";
    cin >> a;
    cout << "entrer le nombre de colone de la matrice : ";
    cin >> b;

    //dyn(tab, &a, &b);  
    
    tab = new int*[a];

    for(i = 0; i < a; i++)
    {
        tab[i] = new int[b];
    }
    
    loopGet(tab, a, b);

    loopPrint(tab, a, b);

   
    return 0;
}
