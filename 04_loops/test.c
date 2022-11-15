#include <stdio.h>

int main(void)
{
    int n = 98;
    int *p = &n;

    printf("The value of n = %d\n", n);
    printf("The value of p = %d\n", p);

    *p++;

    printf("The value of n = %d\n", n);
    printf("The value of p = %d\n", p);

}