#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2


int main(void)
{
    int mul_arr[][COL] = {{1,2}, {3,4}};

    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            printf("%4d", mul_arr[i][j]);
        }
        puts(" ");
    }

    return (0);
}

