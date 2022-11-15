#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 // size of the array to be used in the program

/**
 * main - main function to start program execution
 *
 *
 */
int main(void)
{
    int array[SIZE] = {3, 15, 8, 7, 9,};
    int outer_index; // index to control the outter for loop 
    int inner_index; // index to control the inner for loop

    printf("----------------------------------------------\n");
    printf("%s%13s%17s\n", "Element", "Value", "Histogram");
    printf("----------------------------------------------\n");

    for (outer_index = 0; outer_index < SIZE; ++outer_index)
    {
        printf("%7d%13d        ", outer_index, array[outer_index]);

        for (inner_index = 0; inner_index < array[outer_index]; ++inner_index)
        {
            printf("%c", '*');
        }

        puts("");
    }
    return (0);
}