// Copy function implement to copy the content on one string or array into another
#include <stdio.h>

void copy(char * const s1, char * const s2);

int main(void)
{
    char string1[] = "Hello! From the Matrix";
    char string2[10];

    copy(string1, string2);

    // printf("String2 is now = %s", string2);

    return (0);
}


void copy(char * const s1, char * const s2)
{
    for (size_t i = 0; (s2[i] = s1[1]) != '\0'; ++i)
    {
        ;
    }
}