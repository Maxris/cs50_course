#include <stdio.h>

int main(void)
{
    char name;
    
    printf("What's your name ?");
    scanf("%s", &name);
    
    printf("Hello, %s\n", name);

    return 0;
}