#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string const file("fichier/fichier.txt");
    /*
    fstream monFlux;
    monFlux.open(file.c_str(), ios::in);
    */
   ifstream monFlux(file.c_str());
    if(monFlux.is_open())
    {
        
        string line;
        int end;
        while(monFlux >> line)
        {
            cout << line << " ";

        }
        monFlux.seekg(-1, ios::end);
        end = monFlux.tellg();
        cout << endl <<"taille du fichier : " << end << " octees";
        
        monFlux.close();

    }
    else
    {
        cout << "ERREURE : impossible d\'ouvrire le fichier ." << endl;
    }


    return 0;
}
