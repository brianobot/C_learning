#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    while (1)
    {
        malloc(sizeof(char) * 1024);
    }
    return (0);
}