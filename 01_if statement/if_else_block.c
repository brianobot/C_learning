/* program to display the decision making process with a if-else blocks and conditions to check against */
#include <stdio.h>

/* function main starts program execution */
int main(void)
{
    int age; /*declare a variable to hold the age value */

    printf("Enter your age: "); /* prompt */
    scanf("%d", &age); /* gets the age value from the user*/

    if (age > 18){
        puts("Hurray! you are an Adults"); /* block to be executed if the if block condition is met*/
    }
    else {
        puts("Awwwn! you are still a child"); /* block to be executed if the if block's condition is not satistied /*/
    }


}/* end of main function */