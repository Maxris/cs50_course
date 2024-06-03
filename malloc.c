// test of malloc() 

#include <stdio.h>
#include <stdlib.h> // requiered for the malloc() use

int main(void)
{

    int *allocatedMemory = NULL; //pointer on the int

    allocatedMemory = malloc(sizeof(int)); // the malloc funnction gives an adress to the pointer


/*-----------------------memory allocation test-------------------------*/

    /*
    if(allocatedMemory == NULL) //if allocation failed, we stop the program with exit()
    {
        exit(0);
    }else {
        printf("%p\n", allocatedMemory);
    }
    */
    
/*----------------------------------------------------------------------*/



    printf("how old are u ?\n> ");
    scanf("%d", allocatedMemory);

    printf("you are %d years old\n", *allocatedMemory);

    free(allocatedMemory);

    return 0;
}

//here the memory is being freed manually, but it's the same automaticlly at the end of the function