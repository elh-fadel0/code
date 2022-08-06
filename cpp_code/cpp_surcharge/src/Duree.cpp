#include "../include/Duree.hpp"
#include <iostream>
#include <string>
using namespace std;

Duree::Duree() : m_heure(0), m_minute(0), m_seconde(0){};

/*-------------------------------*/
Duree::Duree(int heure, int minute, int seconde) : m_heure(heure), m_minute(minute), m_seconde(seconde)
{
    m_minute += m_seconde / 60;
    m_seconde %= 60;
    m_heure += m_minute / 60;
    m_minute %= 60;
};

/*-------------------------------*/
void Duree::affichager() const
{
    cout << m_heure << "H " << m_minute << "M " << m_seconde << "S " << endl;
}
/*-------------------------------*/
Duree& Duree::operator+=(const Duree& b)
{
    m_seconde += b.m_seconde;
    m_minute += m_seconde / 60;
    m_seconde %= 60;
    m_minute += b.m_minute;
    m_heure += m_minute / 60;
    m_minute %= 60;
    m_heure += b.m_heure;
    return *this;
}

/*-------------------------------*/
bool Duree::estEgal(Duree const& b)
{
    return (m_heure == b.m_heure && m_minute == b.m_minute && m_seconde == b.m_seconde);
}

/*-------------------------------*/
int Duree::getheure()
{
    return m_heure;
}

/*-------------------------------*/
int Duree::getminute()
{
    return m_minute;
}

/*-------------------------------*/
int Duree::getseconde()
{
 return m_seconde;
}

/*-------------------------------*/
bool operator==(Duree& a, Duree& b)
{
    return a.estEgal(b);
}

/*-------------------------------*/
bool operator!=(Duree& a, Duree& b)
{
    return !(a == b);
}

/*-------------------------------*/
Duree operator+(Duree& a, Duree& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}   