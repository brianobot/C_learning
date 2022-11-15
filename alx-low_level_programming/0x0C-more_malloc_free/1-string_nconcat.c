#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - function to check a malloc call
 * @s1: first argument to the function
 * @s2: second argument to the function
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;

    // reallocate s1 to s2 and only realloc the first n chars
    ptr = realloc(s1, );
}