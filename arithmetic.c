/* a program that asks the user to enter two numbers, obtains them from
the user and prints their sum, product, difference, quotient and remainder. */
#include <stdio.h>

/* function main starts program execution */
int main(void)
{
    int num1, num2; // variables to store the 2 number for the arithmetic

    printf("Enter a value for the two numbers: \n"); // prompt
    scanf("%d%d", &num1, &num2); // read the two values into num1 and num2 respectively

    printf("The Sum of %d and %d is %d\n", num1, num2, num1 + num2); // prints their sum

    printf("The Product of %d and %d is %d\n", num1, num2, num1 * num2); // prints their product

    printf("The Difference of %d and %d is %d\n", num1, num2, num1 - num2); // prints their difference

    printf("The Quotient of %d and %d is %d\n", num1, num2, num1 / num2); // prints their quotient
    
    printf("The Remainder of %d and %d is %d\n", num1, num2, num1 % num2); // prints their remainder
    

}