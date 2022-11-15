#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int i;

    for (i = 1; i <= 20; ++i)
    {
        // pick random number from 1 to 6 and output it
        printf("%10d", 1 + (rand() % 6));

        // if counter is divisible by 5, begin new line of output
        if (i % 5 == 0) 
        {
            puts("");
        }    
       
    }

    return (0);
}