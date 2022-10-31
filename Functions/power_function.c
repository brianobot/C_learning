/* program to compute the power of an integer */

#include <stdio.h>

int power(int base, int exp);

int main()
{
    int number, exp;

    printf("Enter a value for number and exponent: \n");
    scanf("%d%d", &number, &exp);
    printf("%d to the power of %d is %d\n", number, exp, power(number, exp));
}

int power(int base, int exp)
{
    int i, p;

    p = 1;
    for (i = 1; i <= exp; ++i)
    {
        p = p * base;
    }
    return (p);
}