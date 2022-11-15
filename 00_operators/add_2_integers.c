// program to add 2 integers in the C programming language
#include <stdio.h>

// start of the main function
int main(void)
{
    printf("Starting the program here: \n");

    int integer1, integer2; // first and second number to be entered by the user
    // int integer2; // second number to be entered by the user

    printf("Enter the first Integer:\n"); //prompt
    scanf("%d", &integer1); // read the integer

    printf("Enter the second Integer:\n"); //prompt
    scanf("%d", &integer2); // read the second integer

    int sum = integer1 + integer2; // assign the value of the total expression to sum
    printf("Sum is %d\n", sum);

}// end of the main function