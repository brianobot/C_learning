#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - function to calculate the factorial of a given integer
 * @x : integer argument 
 *
 * Return: factorial of the integer argument
 */


unsigned long long int factorial(unsigned int x);

int main(void)
{
    unsigned int number;
    unsigned int result;

    printf("please a value to compute it factorial: ");
    scanf("%u", &number);

    result = factorial(number);
    printf("The factorial of %d is %llu", number , result);

    return (0);
}


unsigned long long int factorial(unsigned int x)
{
    if (x <= 1)
    {
        return x;
    }
    return x * factorial(x-1);
}