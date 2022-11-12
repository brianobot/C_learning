// c program to introduce the concept of arrays in the c programming language
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[3]; // [] [] [] allocates 3 memory spaces for 3 integers in contagion memery addresses
    int array[10]; // declares an array of 10 integers 
    char another_array[100]; // declares an array of 100 chars
    float float_array[30]; // declares an array of 30 floats

    printf("Array Address = %p\n", array);
    printf("First Element in the Array Address = %p\n", &array[0]);
    printf("Second Element in the Array Address = %p\n", &array[1]);
    printf("Third Element in the Array Address = %p\n", &array[2]);
    printf("Last Element in the Array Address = %p\n", &array[9]);

    return (0);
}
