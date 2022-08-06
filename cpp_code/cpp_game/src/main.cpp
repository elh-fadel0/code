#include "../include/personne.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Personne gora;
    Personne lif("bombe", 20);
    gora.introduceGamer();
    cout << "---------------------"<<endl;
    lif.introduceGamer();
    cout << "---------------------"<<endl;

    /*--------------------------------------------*/
    gora.afficher();
    cout << "---------------------"<<endl;
    lif.afficher();

    /*--------------------------------------------*/
    gora.changerarme("nucleaire", 40);

    /*--------------------------------------------*/
    cout << "---------------------"<<endl;    
    gora.atacker(lif);
    gora.afficher();
    cout << "---------------------"<<endl;
    lif.afficher();

    /*--------------------------------------------*/
    cout << "---------------------"<<endl;
    lif.atacker(gora);
    cout << "---------------------"<<endl;
    gora.afficher();
    cout << "---------------------"<<endl;
    lif.afficher();

    /*--------------------------------------------*/
    cout << "---------------------"<<endl;
    gora.boirePossion(10);
    lif.boirePossion(45);
    gora.afficher();
    cout << "---------------------"<<endl;
    lif.afficher();
    return 0;
}