#include <stdio.h>
#include "game.h"

void gameManager(void)
{
    int TI = 1, TJ = 1;
    char area[MAX_I][MAX_J];
    int *playerI = &TI;
    int *playerJ = &TJ;

    areaInitialisation(area, playerI, playerJ);
    displayArea(area);
}


////////////////////////////////////////////////////////////


void areaInitialisation( char area[][MAX_J], int *playerI, int *playerJ)
{
    for( int i = 0; i < MAX_I; i++)
    {
        for(int j = 0; j < MAX_J; j++)
        {
            if( i == 0 || i == MAX_I - 1 || j == 0 || j == MAX_J - 1)
            {
                area[i][j] = 'O';
            }else{
                area[i][j] = ' ';
            }
        
        }
    }
    area[*playerI][*playerJ] = 'T';
}

////////////////////////////////////////////////////////////

void displayArea(char area[][MAX_J])
{
    printf("\n");
    for(int i = 0; i < MAX_I; i++)
    {
        for(int j = 0; j < MAX_J; j++)
        {
            if(j == 0 && i > 0)
            {
                printf("\n%c", area[i][j]);
            }else{
                printf("%c", area[i][j]);
            }
        }
    }printf("\n");
}