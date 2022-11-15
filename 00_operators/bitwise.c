/* program to study the bitwise operation of the c programming language */
#include <stdio.h>

/* function main begin program execution */
int main(void)
{
    char b1 = 0b00000010;
    char b2 = 0b00000011;
    char b30, b31, b32;

    b30 = 0 & b2; /* bitwise OR*/
    printf("the value of b30 is %d\n", b30);

    b31 = (b2 >> 2) & 0b00000001;
    printf("the value of b31 is %d\n", b31);

    b32 = (b2 >> 1) & 0b00000001;
    printf("the value of b32 is %d\n", b32);

}/* end of the main function */