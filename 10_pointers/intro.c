// pointers are variables that hold the address of another variable

#include <stdio.h>


int main(void)
{
    int number = 98;
    int *ptr = NULL;

    ptr = &number;
    printf("The Value of ptr is %p\n", ptr);
    printf("The Value of number is %d\n", number);
    printf("______________________________________\n");
    printf("The memory address of number is %p\n", &number);
    printf("The memory address of ptr is %p\n", &ptr);

    return (0);
}