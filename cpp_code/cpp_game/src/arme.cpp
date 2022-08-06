#include "../include/arme.hpp"
#include <iostream>
#include <string>

using namespace std;

Arme::Arme(string nomArme, int degatsArme) : m_nom(nomArme), m_degats(degatsArme)
{

}

/*--------------------------------------------*/
Arme::Arme() : m_nom("fusi"), m_degats(10)
{

}


/*--------------------------------------------*/
string Arme::getnom() const
{
    return m_nom;
}

/*--------------------------------------------*/
int Arme::getdegats() const
{
    return m_degats;
}

/*--------------------------------------------*/
void Arme::setnom(string newNom)
{
    m_nom = newNom;
}

/*--------------------------------------------*/
void Arme::setdegats(int newDegats)
{
    m_degats = newDegats;
}

/*--------------------------------------------*/