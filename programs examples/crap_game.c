// dice game implemented in c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void);

int main(void)
{
    srand(time(NULL));

    int sum;
    int myPoint;
    enum Status gameStatus;

    sum = rollDice();

    switch(sum)
    {
    
    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }

    while (gameStatus == CONTINUE)
    {
        sum = rollDice();

        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else 
        {
            if (sum == 7)
                gameStatus = LOST;
        }
    }

    if (gameStatus == WON)
        printf("The Player has Won!\n");
    else
        printf("The Player has lost!\n");

}

int rollDice(void)
{
    int dice1;
    int dice2;
    int sum;

    dice1 = 1 + (rand() % 6);
    dice2 = 1 + (rand() % 6);

    sum = dice1 + dice2;
    printf("Player rolled %d and %d, sum is %d\n", dice1, dice2, sum);
    
    return (sum);
}