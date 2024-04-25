#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    int longueur = 0;
    int largeur = 0;
    int aire = 0;

    printf("veuillez renseigner la longueur du rectangle (en cm): ");
    scanf(" %d", &longueur);

    printf("veuillez renseignez la largeur du rectangle (en cm): ");
    scanf("%d", &largeur);

    aire = longueur * largeur;
    printf("le rectangle a une aire de : %d cm2\n", aire);

    return 0;
}
