#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[5]; // declare an array of 5 integers, its values are undefined currently
    int second_array[7] = {0} // declares an array and initializes it first element, this also initializes the rest of it content to 0
    int another_array[5] = {12, 23, 34, 45, 45}; // initializing an array with a list of values
    unsigned int index; // declare an index to be used to control the loop for the array manipulation

    for (index = 0; index < 5; ++index)
    {
        array[index] = 0;
    }

    printf("%3s %10s %20s\n", "index", "First Array Values", "Second Array values");
    for (int i = 0; i < 5; ++i)
    {
        printf("%3d%10d%20d\n", i+1, array[i], another_array[i]);
    }

    return (0);
}