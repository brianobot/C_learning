#include <stdio.h>
#define SIZE 12


int main(void)
{
    int array[SIZE] = {32, 56, 43, 43, 67, 564, 34, 65, 32, 56, 45};
    int i;

    // original array
    for (i = 0; i < SIZE; ++i)
    {
        printf("%4d", array[i]);
    }

    puts("");

    for (i = 0; i < SIZE; ++i) // loop over every array element from 0 to (SIZE - 1)
    {
        for (size_t pass = 0; pass < SIZE; ++pass)
        {
            if (array[pass] > array[pass + 1])
            {
                int hold = array[pass];
                array[pass] = array[pass + 1];
                array[pass + 1]  = hold;
            }
        }
    }

    puts("Data in ascending order \n");

    for (size_t index = 0; index < SIZE; ++index)
    {
        printf("%4d", array[index]);
    }

    puts(" ");

    return (0);
}