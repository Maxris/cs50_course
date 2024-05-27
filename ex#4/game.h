#if !defined(__GAME__H__)
#define __GAME__H__

//////////////////////////////////////

// -----game area seiz-----

#define MAX_COL 2
#define MAX_ROWS 2

#define MAX_J MAX_COL * 2
#define MAX_I MAX_ROWS * 2

//-----prototypes-----

void gameManager(void);
void areaInitialisation(char area[][MAX_J], int *playerI, int *playerJ);
void displayArea(char area[][MAX_J]);
void displayMenu(char *moveComand);
void loopArea(char area[][MAX_J], char *moveComand, int *playerI, int *playerJ);
void moveUp(char area[][MAX_J], int *playerI, int *playerJ);
void moveDown(char area[][MAX_J], int *playerI, int *playerJ);
void moveLeft(char area[][MAX_J], int *playerI, int *playerJ);
void moveRight(char area[][MAX_J], int *playerI, int *playerJ);
void flushBuffer(void);


//////////////////////////////////////

#endif