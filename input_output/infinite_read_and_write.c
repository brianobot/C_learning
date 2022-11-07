/** continue to read and write a character to the standard input or output 
 * provided the char is the the E.O.F char
*/
#include <stdio.h>

void main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}