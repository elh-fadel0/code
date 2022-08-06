#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("vous étes dans vôtre editeure de texte préféré.\n");
    FILE* file = NULL;

    file = fopen("texte.txt", "a");
    if(file != NULL)
    {   
        char a[100];
        char c[100];
        int b;
        int d;

        printf("combien deleve avez vous :");
        scanf("%d", &d);
        for(int i = 1; i <= d; i++)
        {
            printf("----%d ere personne----\n", i);
            printf("\n");
            printf("Donner le nom ? :");
            scanf("%s", a);
            printf("\n");
            printf("l\'ecole? :");
            scanf("%s", c);
            printf("\n");
            printf("Son age? :");
            scanf("%d", &b);
            printf("\n");

            fprintf(file, "nom : %s | ecole : %s | age : %d ans \n", a, c, b);

            system("cls");
        }

        fclose(file);
    }

    return 0;
}