#include "../include/dyn.hpp"
#include <iostream>

using namespace std;

/*
void alloc(int **p, int *a, int *b)
{
    int i;
    p = new int*[*a];

    for(i = 0; i < *a; i++)
    {
        p[i] = new int[*b];
    }
}
*/
//------------------------------------------//

void loopPrint(int **p, int& a, int& b)
{
     int i, j;
     for(i= 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
           cout << "entrer tab[" << i << "][" << j << "] = " << p[i][j] << "\t";
            cout << "\n";
        }
        
    }
}

//------------------------------------------//

void loopGet(int **p, int& a, int& b)
{
     int i, j, d{100};
    for(i= 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
          p[i][j] = d - 1;
          d--;
        }
        
    }
}