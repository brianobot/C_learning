/* c program to show the usage of the return statement in c functions */
#include <stdio.h>

/* user defined function to carry out addition on 3 integers and return the result */
int add(int a, int b, int c){
    int result; /* declare the result variable */

    result = a + b + c; /* perform the addition in a single expression */
    return (result); /* return the result to the caller of the function */
}

/* function main starts program execution */
int main(void){
    int a;
    int b;

    b  = 98;
    a = 1 + 2 + 3 + 4;
    b = 23 + add(32, a, a + b); /* calls the function add */
    return (0); /* using return in the main function ends the program */
    
    a = 999999999; /* anythinh after the return is not executed */
}