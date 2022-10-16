/* program to display the syntax and use of the while loop in the c programming language */
#include <stdio.h>

/* function main starts program execution */
int main(void)
{
    int a = 0;

    while (a < 100){
        printf("A is currently = %d\n", a);
        a += 1;
    }
}/* end of the main function */