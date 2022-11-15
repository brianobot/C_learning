#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    static int array[] = {12, 23, 54, 65, 23, 45, 65, 23, 54, 23, 56, 23, 66, 7, 23, 56, 23, 45, 6, 23, 56, 23, 56, 46};
    // static arrays are created once when the program starts and are not destroyed when they are out of scope
    // nevertheless the can not be accessed outside thier local scope except declared in the global scope
    int i = 0;

    printf("%s%10s\n", "Element", "Value");
    for (i; i < (sizeof(array) / sizeof(int)); ++i)
    {
        printf("%7d%10d\n", i, array[i]);
    }
    return (0);
}