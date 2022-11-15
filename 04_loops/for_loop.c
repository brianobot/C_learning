/* program to demonstrate the operation of the for loop in C programming language */
#include <stdio.h>

unsigned int even_sum_to(unsigned int limit); // declare a function that sum even numbers from 2 to a upper limit

/* function main starts program execution */
int main(void)
{
    int my_array[100]; // declare a array variable of the type int with a size of 100

    /* for statement contains 3 sections as outlined below
     * ( initialization section ; termination section ; increment section )
     * 
     * the initialization section initialzes the control variable (the variable that controls the execution of the for loop) 
     * the termination section states an condition involving the control variable that the loop should be terminate
     * the increment section states an expression used to derive the next value for the control variable 
     * (the step needed to proceed to the next iteration)
     */
 
    for (unsigned int i = 1; i <= 100; ++i){
        my_array[i] = 1337;
    }

    printf("The value of my_array is %s", my_array);

}/* end of the main function */



unsigned int even_sum_to(unsigned int limit)
{
    unsigned int sum;

    sum = 0;
    for (unsigned int i = 2; i <= limit; i += 2)
    {
        sum += i;
    }

    printf("The Sum of all even numbers between 2 and %u is %u", limit, sum);
}