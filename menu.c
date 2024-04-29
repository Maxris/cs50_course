#include <stdio.h>

int main(int argc, const char * argv[])
{
    int choixMenu = 0;

    printf("===Menu===\n");
    printf("1. Royal cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");

    while (choixMenu < 1 || choixMenu > 4) //doesn't work if the user input a letter, have to fix it 
    {
        printf("Votre choix ? 1, 2, 3 ou 4 ?\n");
        scanf("%d", &choixMenu);

        switch (choixMenu)
        {
        case 1:
            printf("vous avez choisis le Royal cheese !\n");
            break;
        case 2:
            printf("vous avez choisis le Mc deluxe !\n");
            break;
        case 3:
            printf("vous avez choisis le Mc Bacon !\n");
            break;
        case 4:
            printf("vous avez choisis le Big Mac !\n");
            break;
        default:
            printf("vous n'avez pas faim ?\n");
        }
    }
    
    int choixDessert = 0;

    printf("\nvoulez-vous un dessert ?\n oui : 1\n non : 0\n");
    scanf("%d", &choixDessert);

    switch (choixDessert)
    {
    case 1:
        printf("\n");
        break;
    
    default:
        printf("\n");
        break;
    }


    if(choixDessert == 1){
        printf("\nca fera 15€\n");
    }
    else {
        printf("\nca fera 10€\n");
    }
    return 0;
}
