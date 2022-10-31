/* converts a range of Celcieus values to Farenheit values */
#include <stdio.h>

#define UPPER 300 // Symbolic constants
#define LOWER 0 // 
#define STEP 20 //

int convert_temp_from_fahr_to_cel(int fahr);

//  function main starts program executio
int main(void)
{
    int fahr ; // declare a variable to hold the farenheit values
    
    for (fahr=LOWER; fahr <= UPPER; fahr += STEP)
    {
    printf("%d\t%d \n", fahr, convert_temp_from_fahr_to_cel(fahr));
    }    
}

int convert_temp_from_fahr_to_cel(int fahr)
{
    int cel = (5 * (fahr - 32) / 9);
    return (cel);
}