/* a program that asks the user to enter two numbers, obtains them from
the user and prints their sum, product, difference, quotient and remainder. */
#include <stdio.h>

/* function main starts program execution */
int main(void) {
    int num1, num2; // variables to store the 2 number for the arithmetic 
    
    printf("Enter two numbers: "); // prompt
    scanf("%d%d", &num1, &num2);  // read the two values into num1 and num2 respectively
    
    printf("Sum: %d\n", num1 + num2);
    printf("Product: %d\n", num1 * num2);  // prints their sum
    printf("Difference: %d\n", num1 - num2); // prints their product
    printf("Quotient: %d\n", num1 / num2); // prints their quotient
    printf("Remainder: %d\n", num1 % num2); // prints their remainder
    return 0;
}
