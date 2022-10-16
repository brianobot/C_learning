/* this program would make decision from a condition to execute part of the program */
#include <stdio.h>

/* function main begin program execution */
int main(void)
{
    puts("Enter a value for the two integers and i will tell you");
    printf("%s", "the relation they satisfy: ");

    int num1, num2; /* first and second number to be read from the user */

    scanf("%d %d", &num1, &num2); /* read the two numbers from the user */

    if (num1 == num2){
        printf("%d is equal to %d\n", num1, num2);
    } /* end if */

    if (num1 != num2) {
        printf( "%d is not equal to %d\n", num1, num2 );
    } /* end if */
    
    if (num1 < num2) {
        printf( "%d is less than %d\n", num1, num2 );
    } /* end if */
    
    if (num1 > num2) {
        printf( "%d is greater than %d\n", num1, num2 );
    } /* end if */
    
    if (num1 <= num2) {
        printf( "%d is less than or equal to %d\n", num1, num2 );
    } /* end if */
    
    if (num1 >= num2) {
        printf( "%d is greater than or equal to %d\n", num1, num2 );
    } /* end if */

} /* end function main */