#ifndef __ARME__
    #define __ARME__
    #include <string>

    class Arme 
    {
        public:
            Arme();
            Arme(std::string nomArme, int degatsArme);
            std::string getnom() const;
            int getdegats() const;
            void setnom(std::string newNom);
            void setdegats(int newDegats);
         private:
            std::string m_nom;
            int m_degats;
    };
#endif