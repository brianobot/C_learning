#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    char *str;

    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    return (0);
}

/**
 * It is very important because as you know, the size of the different types will be different
 * on different machines: we want 3 times the size of a char (which happens to be 3 times 1 byte on our 64-bit machine). 
 * Always use sizeof for a better portability.
 */