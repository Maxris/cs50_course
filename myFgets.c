//make a personal fget() to avoid the atomatic '\n'

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //for strchr()

int read(char *chain, int lenght);

int main(void)
{
    
    return 0;
}


void flushBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}



int read(char *chain, int lenght)
{
    char *entryPosition = NULL;

    if(fgets(chain, lenght, stdin) != NULL) //we read the user's input on the keyboard, no error ?
    {
        entryPosition = strchr(chain, '\n'); //we're looking for the entry
        if(entryPosition != NULL) // if we find the line break
        {
            *entryPosition = '\0'; //we replace the char by 0
        }
        else
        {
            flushBuffer();
        }
        return 1; //if no error
    }
    else
    {
        flushBuffer();
        return 0; //if there is an error
    }
}