#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);


int main(void)
{
    int a[SIZE];
    int search_key;
    size_t index;

    for (size_t i = 0; i < SIZE; ++i)
    {
        a[i] = 2 * i;
    }

    printf("Enter a search key: ");
    scanf("%2d", &search_key);

    index = linearSearch(a, search_key, SIZE);

    if (index != -1)
        printf("Found value at index = %d\n", index);
    else
        puts("Value not found!");

    return (0);
}

size_t linearSearch(const int array[], int key, size_t size)
{
    size_t index;

    for (index = 0; index < size; ++index)
    {
        if (key == array[index])
            return (index);
    }

    return (-1);
}