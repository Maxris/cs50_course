#include <stdio.h>
/*
In this exercise, we set a price for an object, then the program analyse how many money the user gave.
After that, the program will calculate thr money to give back */

int main(void)
{
    int price = 0;
    int userMoney = 0;

    printf("what's the price ?: ");
    scanf("%d", &price);
   
    printf("money given by the user : ");
    scanf("%d", &userMoney);

    if (price == userMoney)
    {
        printf("thank you! \n");
        return 0;

    } else if (price > userMoney)
    {
        printf("not enough money!\n");
        return 1;
    }

    int diff = userMoney - price;

    printf("\nmoney to give back : %d\n", diff);
    
    int twenty = diff /20;
    diff %= 20;
    int ten = diff /10;
    diff %= 10;
    int five = diff /5;
    diff %= 5;
    int two = diff /2;
    diff %= 2;
    int one = diff;

    printf("\ngive back :\n20€ x %d,\n10€ x %d,\n5€ x %d\n2€ x %d\n1€ x %d\n",twenty, ten, five, two, one);

    return 0;
}