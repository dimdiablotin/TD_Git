#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; //nombre de lignes
    int i; // compteur des lignes
    int j;  //compteur des caractères

    printf("Nombre de lignes : ");
    scanf("%d",&n);

    for(i=0; i<=n; i++) //affichage des lignes
    {
        for (j=0; j<n-i; j++) //affichage des espaces
            printf(" ");

        for (j=0; j<2*i-1; j++) // affichage des '*'
            printf("*");

        printf("\n");
    }
    return 0;
}