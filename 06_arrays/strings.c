#include <stdio.h>


int main(void)
{
    char name[] = "Brian";

    printf("Name is %s\n", name);

    name[0] = 'R';

    printf("Name is now %s\n", name);

    return (0);
}