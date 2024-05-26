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
void areaInitialisation( char area[][MAX_J], int *playerI, *playerJ);
void displayArea(char area);

//////////////////////////////////////

#endif