/* program to test the addition of a integer type to char type */
#include <stdio.h>

/* function main starts program execution */
int main(void)
{
    int a = 15;
    char b = 'a';

    printf("The sum of a and b is %d\n", a+b); /* displat the result of the summation as a formated string */

    printf("The value of a is %d\n", a);
    printf("The value of b is %c\n", b); /* note that the %c converter is used to display character */

}/* end of main function */