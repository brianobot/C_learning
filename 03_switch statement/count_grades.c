#include <stdio.h>

int main(void)
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int eCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input");

    int grade;

    while ((grade = getchar()) != EOF)
    {
        // determine which grade was input
        switch (grade) 
        { // switch nested in while
        case 'A':
        case 'a':
            ++aCount;
            break; // if the break is not added at the end of each case block , once a block is executed all the other blocks below will all be executed
            // the feature is called a fall through and is rarely ever useful,
        case 'B':
        case 'b':
            ++bCount;
            break;
        case 'C':
        case 'c':
            ++cCount;
            break;
        case 'D':
        case 'd':
            ++dCount;
            break;
        case 'E':
        case 'e':
            ++eCount;
            break;
        case 'F':
        case 'f':
            ++fCount;
            break;
        // Remember to provide processing capabilities for newline (and possibly other white-space)
        // characters in the input when processing characters one at a time.
        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            printf("%s", "Incorrect letter entered!\n");
            puts("Enter a new grade.");
            break; // optional, will exit switch anyway
        }
    }
    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}