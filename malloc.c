// test of malloc() 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int* allocatedMemory = NULL; //pointer on the int

    allocatedMemory = malloc(sizeof(int)); // the malloc funnction gives an adress to the pointer

    if(allocatedMemory == NULL) //if allocation failed, we stop the program with exit()
    {
        exit(0);
    }else {
        printf("%p\n", allocatedMemory);
    }

    free(allocatedMemory);

    return 0;
}