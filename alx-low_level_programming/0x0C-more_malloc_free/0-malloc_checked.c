#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function to check a malloc call
 * @b: first argument to the function
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
    int *ptr;

    ptr = malloc(b);

    if (ptr == NULL)
    {
        free(ptr);
        exit(98);
    }

    return (ptr);
}

int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}