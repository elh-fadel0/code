#include "securefonc.h"
#include <stdio.h>
#include <string.h>


int lire(char *mot, int longueur)
{
    char *carac = NULL;

    if((fgets(mot, longueur, stdin)) != NULL)
    {
        carac = strchr(mot, '\n');
        if(carac != NULL)
        {
            *carac = '\0';
        }
        else
        {
            return 0;
        }
    }
    else 
    {
        return 0;
    }
}

void viderBuffer(void)
{
    int c = 0;
    while(c != '\n' && c != EOF)
    {
        c = getchar();
    }
      
}