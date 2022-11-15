#include <stdio.h>
#define SIZE 99 // defines a macro which would be size of the array to be used in the program

/**
 * This source file contains statistc functions used to demonstrate the uses of arrays in
 * in the c programming language ecosystem
 */

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(unsigned int a[]);
void printArray(unsigned const int a[]);

int main(void)
{
    unsigned int frequency[10] = {0}; // declare and initialize the frequency array
    
    // initial reponse array
    unsigned int response[SIZE] = 
    {   6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7};

    // process response
    mean(response);
    median(response);
    mode(frequency, response);

    return (0);
}

void mean(const unsigned int answer[])
{
    printf("%s\n%s\n%s\n", "********", "   MEAN", "*******");

    unsigned int total = 0;

    for (size_t i = 0; i < SIZE; ++i)
    {
        total += answer[i];
    }

    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data items divided by the number\n"
           "of data items (%u). The mean value for\n"
           "this run is: %u / %u = %.4f\n\n",
            SIZE, total, SIZE, (double) total / SIZE);
}

void median(unsigned int answer[])
{
    unsigned int number;

    printf("\n%s\n%s\n%s\n%s",
            "********", " Median", "********",
            "The unsorted array of responses is");

    // print the original array
    printArray(answer);

    // sort the array
    bubbleSort(answer);

    // print the sorted array
    printf("%s",  "\n\nThe Sorted array is: ");
    printArray(answer);

    printf("\n\nThe median is element %u of\n"
            "the sorted %u element array.\n"
            "For this run the median is %u\n\n",
            SIZE / 2, SIZE, answer[SIZE / 2]);

}

// determine most frequent response
void mode(unsigned int freq[], const unsigned int answer[])
{
    unsigned int rating; 

    printf("\n%s\n%s\n%s\n","********", " Mode", "********");

    // initialize frequencies to 0
    for (size_t rating = 1; rating <= 9; ++rating) 
    {
        freq[rating] = 0;
    }

    // summarize frequencies
    for (size_t j = 0; j < SIZE; ++j) {
        ++freq[answer[j]];
    }

    // output headers for result columns
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
            "Response", "Frequency", "Histogram",
            "1 1 2 2", "5 0 5 0 5");

    // output results
    unsigned int largest = 0; // represents largest frequency
    unsigned int modeValue = 0; // represents most frequent response

    for (rating = 1; rating <= 9; ++rating) 
    {
        printf("%8u%11u ", rating, freq[rating]);
        if (freq[rating] > largest) 
        {
            largest = freq[rating];
            modeValue = rating;
        }

        // output histogram bar representing frequency value
        for (unsigned int h = 1; h <= freq[rating]; ++h) {
        printf("%s", "*");
        }

        puts(""); // being new line of output
    }

    // display the mode value
    printf("\nThe mode is the most frequent value.\n"
            "For this run the mode is %u which occurred"
            " %u times.\n", modeValue, largest);
}

void bubbleSort(unsigned int array[])
{
    unsigned int i;

    for (i = 0; i < SIZE; ++i) // loop over every array element from 0 to (SIZE - 1)
    {
        for (size_t pass = 0; pass < SIZE; ++pass)
        {
            if (array[pass] > array[pass + 1])
            {
                int hold = array[pass];
                array[pass] = array[pass + 1];
                array[pass + 1]  = hold;
            }
        }
    }
}

void printArray(const unsigned int a[])
{
    // output array contents
    for (size_t j = 0; j < SIZE; ++j) {

        if (j % 20 == 0) 
        { // begin new line every 20 values
            puts("");
        }

        printf("%2u", a[j]);
    }
}