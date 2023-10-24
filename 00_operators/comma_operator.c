/* program to test the operation of comma in assignment expression */
#include <stdio.h>

/* function main starts program execution */
int main()
{
    int a, b, c;

    a = (b = 5, c = 10);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
