// pointers are variables that hold the address of another variable

#include <stdio.h>


int main(void)
{
    int number = 98;
    int *ptr = NULL; // a pointer is declared and initialized to NULL (this is safe practice for pointers)
    // that are not assigned a value on declaration

    ptr = &number; // the address operation is used on the number obj to get its address and 
    // the ptr obj is assinged to the address value
    
    printf("The Value of ptr is %p\n", ptr);
    printf("The Value of number is %d\n", number);
    printf("______________________________________\n");
    printf("The memory address of number is %p\n", &number);
    printf("The memory address of ptr is %p\n", &ptr);

    return (0);
}