#include <stdlib.h>
#include <stdio.h>

int strlen(const char *chain);

int main(void)
{
    return 0;
}


int strlen(const char *chain)
{
    int i = 0;
    while(chain[i] =! "\0")
        i++;
        return i;
        
}
