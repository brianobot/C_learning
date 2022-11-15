// As presented in the ALX concept materials

/**
 * cisfun - function used for concept introduction
 * @n1: number of the project
 * @n2: number of tasks
 *
 * Return: nothing
 */

void cisfun(unsigned int n1, unsigned int n2)
{
    int n;
    char c;
    int *ptr;
    char array[3];
}

// when the above function is called. the program would allocate 
// 4 bytes each for n1, n2 and n since they are all integers and that's the size of integers
// the program will allocate 1 byte for the variable c, since char are single byte datatype 
// the program will also allocate 1 bytes successively in 3 places for the array variable
// which is meant to hold 3 char (1 Byte for each char datatype)

/**
 * main- main introduction
 *
 * Return: always 0
 */
int main(void)
{
    cisfun(3, 4); // when the function is called the spaces are allocated as stated above
    // when the function call is over, the space allocated is released for future use which means 
    // the space and data it held can not be accessed outside the function call
}