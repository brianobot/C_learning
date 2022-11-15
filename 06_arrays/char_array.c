#include <stdio.h>
#include <stdlib.h>
#define SIZE 6 // size of array to contain the string BRIAN i.e = BRIAN + '\0'

int main(void)
{
    char array[] = "Brian is the Programmer that wrote this program!";
    int index = 0; 
    char c;

    while ((c = array[index]) != '\0')
    {
        printf("%c", c);
        ++index;
    }

    return (0);
}