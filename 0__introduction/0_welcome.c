// a first program written in the C programming language
#include <stdio.h> // every line starting with a # is called a preprocessor directives and would be explained later

// lines starting with double forward lash are known as comments (single line comments),
// they are completely ignore by the computer when the program is being compiled
// they can be used to better explain some piece of code or make notes for other when the read your source code (source code 
// refers to the file containig your program) it is also called source file

/**  
 * this are also comments, but they can span multiple lines and are called multi-line comments
 * they are used when the information to be embedded in a comment is too long for a single line
 *
 */

// the function 'main' begins program execution (every C program must have a main function i.e a function called 'main' )
// functions are explained later on, but for now it's enough to know that every function follow this structure below
// datatype function_name(list of arguments)
int main(void) 
{
    printf("Welcome to C!\n"); // this is a function that displays the text "Welcome to C! on the screen"
} // end of the main function


// if you have installed a compiler on your personal computer, 
// you can try this on the command line to compile the source code into a executeable program

// $ gcc welcome.c -o welcome
// after which you can run the 'welcome' program the command line to see the output
// for windows users
// > welcome.exe
// for linux users
// $ ./welcome