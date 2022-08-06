#ifndef __DUREE__
#define __DUREE__

    class Duree
    {
        public:
            Duree();
            Duree(int heure, int minute, int seconde);
            int getheure();
            int getminute();
            int getseconde();
            bool estEgal(Duree const& b);
            void affichager() const;
            Duree& operator+=(const Duree& b);

        public:
            int m_heure, m_minute, m_seconde;
    };

    bool operator==(Duree& a, Duree& b);
    bool operator!=(Duree& a, Duree& b);
    
    Duree operator+(Duree& a, Duree& b);

#endif