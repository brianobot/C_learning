// arithmetic involving pointer objects
#include <stdio.h>

int main(void)
{
    // declare an array of 5 elements and 2 pointers 
    // po5;inting to the array first element
    int arr[5];
    int *Ptr = arr;
    int *Ptr2 = &arr[0];

    // the two pointer above are valid and equavalent to each other

    // when an integer is added to a pointer, its doesn't evaluate to normal arithmetic
    // assume that a pointer Sptr has a value of 3000 (which is the address of the obj the pointer is pointing to)
    // in normal sense 3000 + 2 == 3002, But with Pointers!!
    // Sptr += 3, would evaluate to 3000 plus 3 times the size of the element the pointer is pointing to on that machine
    // therefore, for machine whose integer size is 4 bytes, if the pointer is pointing to a int, this would evaluate to 3000 + (3 * 4) == 3012

    // Example of Pointer Addition
    int random_numbers[100] = {0};
    int *Sptr = random_numbers;

    printf("The value of the Pointer before arithmetic is %d\n", Sptr);

    Sptr += 3; // increment the pointer by 3
    
    printf("The value of the Pointer after the arithmetic is %d\n", Sptr);

    // NOTE: it a common programming error to use arithmetic operation on a NULL pointer (pointer that doesn't point to any object)
    // NOTE: be careful not to run off the ends of an array when using pointer arithmetic to move across the array
    // Example: 
    /**
        int ar[5] = {0}; // declare and the initialze an array to zeroes
        int *ptr = arr; // assume address of arr is 3000

        ptr += 12; // ptr = 3000 + (12 * 4) == 3048 > (3000 + 5*4) which is the last element in the array
    */

    // when incrementing an array by 1 , the ++ increment can be used and vice verse
    ++Sptr; // increments the pointer by 1
    Sptr++; // increments the pointer by 1
    --Sptr; // decrements the pointer by 1
    Sptr--; // decrements the pointer by 1

    // Subtracting pointer from pointer
    // x = V2ptr - vptr; // assume V2ptr value == 3008 and vptr value == 3000 and they both point to int obj
    // x == 2, since 8 == 4 * 2, which is 2 integer objs (Funny? i Know, but you will get use to it)

    // Note: Pointer arithmetic is undefined unless performed on an array
    // NOTE: it is an error to perform subtraction on pointers that are not the same type and array

    // a pointer can be assigned to another pointer if the both have the same type
    int i = 12;
    int *Mptr = &i;
    int *Nptr = Mptr;

    printf("The Value of Mptr is %d and\nThe value of Nptr is %d\n", Mptr, Nptr);

    // the pointer to void, i.e void * is a generic pointer can be assigned to any other pointer
    // a pointer to void, can not be deferenced

    // Note: assigning pointer to another pointer with differenct data type is a syntax error
    /* Note: deferencing a pointer to void is a syntax error, this is because when the deferencing a pointer
       the compiler needs to know the size of the obj being referenced, and with void pointers, the is no way the 
       the compiler can know the size of the referenced ob
    */

    /**
    pointer can be compared with equality operators, but it is meaningless to compare pointers that do not pointer to the same array
    */

    /* In C Arrays and Pointers are closely related, an array name might be thought of as a constant pointer */
    int list[5] = {0};
    int *lPtr = list;

    printf("The Array name return the memory address of the array == memory address of the first element\n");
    printf("The value of list is %p\n", list);
    printf("The value of list[0] is %p\n", lPtr);
    printf("The value of lPtr is %p\n", lPtr);

    /* Pointer/Offset Notation 
    since the name of an array returns the memory address of the first element
    (treating it as constant pointer) deferencing the name of the array would be equivalent to index 0  
    */

    int ratings[10] = {4, 5, 7}; // partially initialized array would be automatically completed with zeros
    
    printf("Using Index to get first value = %d\n", ratings[0]);
    printf("Deferencing Array Name to get first value = %d\n", *ratings);

    /* therefore from the above 
    it can be seen that the index operation is equivalent to deferencing an offset 
    
    array[2] == *(array + 2) // this statement does not modify the array name, it still points to the first element
    array[0] == *(array + 0) == *array
    array[4] == *(array + 4)

    IN general all index expression can be written in terms of pointer offet and deferencing

    Pointers and Arrays Can be used interchangeably
    */


    return (0);
}