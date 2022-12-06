// This program examplifies the usage and rules around the size
// of arrays and other related details

#include <stdio.h>
#define SIZE 20 // define a macro that would be used to declare an array size
/**
* C provides a sizeof unary operator (can be used on a unit obj), that returns the size
of an array or any other object (region of memory) in bytes.

it is used as though it is a function, with the operand placed within parenthesis
it returns the size_t data type, which is a numeric data type

*/

// declaration for a custom function that is defined to wrap the sizeof operator
size_t getSize(float *arr);

int main(void)
{
    float array[SIZE]; // declare an array of 20 float elements

    printf("This size returned by the getSize function is %lu\n", getSize(array));
    printf("This size returned by the sizeof operator is %lu\n", sizeof(array));
    return (0);
}

size_t getSize(float *arr)
{
    return sizeof(arr);
}