#include "../include/personne.hpp"
#include <iostream>
#include <string>

using namespace std;

Personne::Personne() : m_vie(100), m_arme()
{

}

/*--------------------------------------------*/
Personne::Personne(string nomArme, int degatsArme) : m_vie(100), m_arme(nomArme, degatsArme)
{

}

/*--------------------------------------------*/
void Personne::introduceGamer()
{
    cout <<"donner votre nom : ";
    getline(cin, m_nom);
}

/*--------------------------------------------*/
void Personne::boirePossion( int quantityPosion)
{
    m_vie +=quantityPosion;

    if(m_vie > 100)
        m_vie = 100;
}

/*--------------------------------------------*/
void Personne::recevDegat(int degats)
{
    m_vie -= degats;

    if(m_vie < 0)
        m_vie = 0;
}

/*--------------------------------------------*/
void Personne::atacker(Personne &cible)
{
    cible.recevDegat(m_arme.getdegats());
}

/*--------------------------------------------*/
void Personne::changerarme(string nom, int degats)
{
    m_arme.setnom(nom);
    m_arme.setdegats(degats);
}

/*--------------------------------------------*/
void Personne::afficher()
{
    cout << "nom : " << m_nom << endl;
    cout << "vie : " << m_vie << endl;
    cout << "nomArme : " << m_arme.getnom() << endl;
    cout << "degatArme : " << m_arme.getdegats() << endl;

}

/*--------------------------------------------*/
