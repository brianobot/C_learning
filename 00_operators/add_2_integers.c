// program to add 2 integers in the C programming language
#include <stdio.h>

// start of the main function
int main() {
    int a, b, sum;
    
    // Get the first integer from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    // Get the second integer from the user
    printf("Enter the second integer: ");
    scanf("%d", &b);
    
    // Add the two numbers
    sum = a + b;
    
    // Display the result
    printf("The sum of %d and %d is %d\n", a,b, sum);
    
    return 0;
}// end of the main function
