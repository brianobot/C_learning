#include <stdio.h>
#include <math.h>

/** 
 * Name: main
 *
 * Return: int
 */
int main(void)
{
    double principal = 1000.0;
    double rate = .05;

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (unsigned int year = 1; year <= 10; ++year)
    {
        double amount = principal * pow(1.0 + rate, year);

        printf("%4u%21.2f\n", year, amount);
    }
}