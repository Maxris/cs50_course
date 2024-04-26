#include <stdio.h>

int main(void)
{
    int h;
    
        printf("height ? : ");
        scanf("%d", &h);

    while(h < 0)
    {
        printf("height ? : ");
        scanf("%d", &h);
    }


    for(int i = 1; i <= h; i++)
    {

        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    } 
    return 0;

}