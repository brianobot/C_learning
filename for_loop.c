/* program to demonstrate the operation of the for loop in c programming language */
#include <stdio.h>

/* function main starts program execution */
int main(void)
{
    int my_array[100];
    int i;

    for (i=0; i<100; i++){
        my_array[i] = 1337;
    }

    printf("The value of my_array is %a", my_array);

}/* end of the main function */