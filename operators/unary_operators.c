/* demonstrate use of a unary operator to check the size of an type or varaible in memory */
#include <stdio.h>

/* function main starts program execution */
int main(void)
{
    int a; /* declare a integer variable a*/
    int size; /* declare a integer variable size */
    
    a = 10000;
    size = sizeof(a);
    printf("The size of variable 'a' is %d Byte(s)\n", size);

    int int_size = sizeof(int); /* checks the size of the int type*/
    int char_size = sizeof(char); /* checks the size of the char type*/ 

    printf("The size of the 'int' type is %d Byte(s)\nThe size of the 'char' type is %d\n", int_size, char_size);

}/* end of the main function */