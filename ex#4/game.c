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
    printf("---------------\n");
    printf("move the 'T':\n");
    printf("z : up\n" "s : down\n" "q : left\n" "d : right\n" "e : quit\n");
    printf("---------------\n");
    printf(">");
    scanf("%c", moveComand);
    flushBuffer();
}

////////////////////////////////////////////////////////////


void loopArea(char area[][MAX_J], char *moveComand, int *playerI, int *playerJ)
{
    switch (*moveComand)
    {
        case 'e':
            printf("Bye !\n");
            break;

        case 'u':
            moveUp(area, playerI, playerJ);
            break;

        case 's':
            moveDown(area, playerI, playerJ);
            break;

        case 'q':
            moveLeft(area, playerI, playerJ);
            break;

        case 'd':
            moveRight(area, playerI, playerJ);
            break;

        default:
            printf("incorrect comand !\n");
            break;
    }
}

/*--------------------T control commands--------------------*/

void moveUp(char area[][MAX_J], int *playerI, int *playerJ)
{
    if(*playerI == 1)
    {
        return;

    area[*playerI][*playerJ] = ' ';
    (*playerI)--;
    area[*playerI][*playerJ] = 'T';
    }

}

void moveDown(char area[][MAX_J], int *playerI, int *playerJ)
{
    if(*playerI == MAX_I - 2)
    {
        return;

    area[*playerI][*playerJ] = ' ';
    (*playerI)++;
    area[*playerI][*playerJ] = 'T';
    }
}

void moveLeft(char area[][MAX_J], int *playerI, int *playerJ)
{
    if(*playerJ == 1)
    {
        return;

    area[*playerI][*playerJ] = ' ';
    (*playerJ)--;
    area[*playerI][*playerJ] = 'T';
    }
}

void moveRight(char area[][MAX_J], int *playerI, int *playerJ)
{
    if(*playerJ == MAX_J - 2)
    {
        return;

    area[*playerI][*playerJ] = ' ';
    (*playerJ)++;
    area[*playerI][*playerJ] = 'T';
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