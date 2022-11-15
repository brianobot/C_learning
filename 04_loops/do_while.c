#include <stdio.h>

int main(void)
{
    int counter = 0;

    do {
        printf("The value of the counter is %d\n", counter);
    } while (++counter <= 10);
}