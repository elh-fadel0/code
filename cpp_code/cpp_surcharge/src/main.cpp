#include "../include/Duree.hpp"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    Duree dur1(1, 60, 60);
    Duree dur2(1, 70, 70);
    Duree resultat;

    cout <<"comparaison de durees :"<< endl;
    if(dur1 != dur2)
        cout <<"les sont duree differant"<< endl;
    else
        cout <<"les sont duree egaux"<< endl;
    
    dur1.affichager();
    cout << "+" << endl;
    dur2.affichager();
    cout << "=" << endl; 
    resultat = dur1 + dur2;

    resultat.affichager();

    return 0;
}