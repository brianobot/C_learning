#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib(unsigned int number);

int main(void)
{
    unsigned int x;
    unsigned long long int result;

    printf("Please enter a value to compute the fibonacci series for: ");
    scanf("%u", &x);

    result = fib(x);
    printf("The fibonnaci of %d is %llu", x, result);

    return (0);
}

unsigned long long int fib(unsigned int number)
{
    if (number == 1 || number == 0)
        return number;
    else
        return fib(number - 1) + fib(number - 2);
}