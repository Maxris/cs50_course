#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 0;
    int result = 0; // if this variable is not initialised to 0, there is a mistake with the for loop !

    printf("choose a number min (1 to 1000): \n");
    scanf("%d", &min);

    printf("choose a number max (1 to 1000): \n");
    scanf("%d", &max);

    if (min > max)
    {
        printf("min must be lower than max\n");
        return -1;

    } else if (max < 1 || max > 1000)
    {
        printf("min and max must be between 1 and 1000\n");
        return -1;

    } else
    {
        for(int i = min; i < max + 1; i++)
        result += i;
    }
    
    printf("\nthe result is : %d\n", result);
    return 0;
}