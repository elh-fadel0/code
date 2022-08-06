#ifndef __PERSONNE__
    #define __PERSONNE__
    #include "arme.hpp"
    #include <string>
    

    class Personne
    {   
        public:
            
            Personne();
            Personne(std::string m_nomArme, int degatsArme);
            void boirePossion( int quantityPosion);
            void recevDegat(int degats);
            void atacker(Personne &cible);
            void changerarme(std::string Nom, int degats);
            void introduceGamer();
            void afficher();    

        /*----------------------------*/

        private:
            int m_vie;
            std::string m_nom;
            Arme m_arme;
       

    };


#endif