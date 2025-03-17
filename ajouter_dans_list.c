#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int V, i;

    // Saisie des 10 entiers
    printf("Entrez 10 entiers :\n");

    for(int j = 0; j < 10; j++)
    {
        scanf("%d", &arr[j]);
    }

    // Saisie de V et de l'indice i
    printf("Entrez un entier V : ");
    scanf("%d", &V);

    printf("Entrez un indice i (compris entre 0 et 9) : ");
    scanf("%d", &i);

    // Décalage des éléments à partir de l'indice i
    for(int j = 9; j > i; j--)
    {
        arr[j] = arr[j - 1];
    }

    // Insertion de V à l'indice i
    arr[i] = V;

    // Affichage du tableau final
    printf("Tableau final :\n");
    
    for(int j = 0; j < 10; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}