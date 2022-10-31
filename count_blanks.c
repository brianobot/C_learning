/* program to count blanks, spaces and newline */
#include <stdio.h>

int main(void)
{
    unsigned int count = 0;
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n'){
            ++count; 
        }
        else if (c == ' '){
            ++count; 
        }
        else if (c == '\b'){
            ++count; 
        }
    }
    printf("Count of blanks, tabs and newlines = %d", count);
}