#include <stdio.h>
#include <stdlib.h>

/**
 * tets_function - function used to explain exit process of the exit standard function
 * 
 * Return: nothing
 */
void test_function(void)
{
    printf("Starting the execution of the test function ...\n");
    exit(1); // optionally the constant provided by the standard library can be used as the argument to the exit function
    // EXIT_SUCCESS and EXIT_FAILURE
    printf("This line should never be reached because of the exit function above\n");
}


int main(void)
{
    printf("Starting the program execution with the main function \n");
    printf("About to call the test function \n");

    test_function();

    return (0);
}