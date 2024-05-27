#include <stdio.h>
#include "game.h"

void gameManager(void)
{
    char cmd = 'm';
    int TI = 1, TJ = 1;
    char area[MAX_I][MAX_J];
    char *moveComand = &cmd;
    int *playerI = &TI;
    int *playerJ = &TJ;

    areaInitialisation(area, playerI, playerJ);
    
    while (*moveComand != 'q')
    {
        displayArea(area);
        displayMenu(moveComand);
        loopArea(area, moveComand, playerI, playerJ);
    }

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

////////////////////////////////////////////////////////////

void displayMenu(char *moveComand)
{
    printf("move the 'T':\n");
    printf("z : up\n" "s : down\n" "q : left\n" " d : right\n" "q: quit\n");
    printf(">");
    scanf("%c", moveComand);
    flushBuffer();
}

////////////////////////////////////////////////////////////


void loopArea(char area[][MAX_J], char *moveComand, int *playerI, int *playerJ)
{
    switch (*moveComand)
    {
        case 'q':
            printf("Bye !\n");
            break;

        deflault:
            printf("incorrect comand !\n");
            break;
    }
}

////////////////////////////////////////////////////////////


void flushBuffer(void)
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
    
}