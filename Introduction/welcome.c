// a first program written in the C programming language
#include <stdio.h> // every line starting with a # is called a preprocessor directives and would be explained later

// lines starting with double forward lash are known as comments (single line comments),
// they are completely ignore by the computer when the program is being compiled
// they can be used to better explain some or make notes for other when the read your source code

/**  
 * this are also comments, but they can span multiple lines and are called multi-line comments
 *
 *
 */

// function main begins program execution (every C program must have a main function )
// functions are explained later on
int main(void)
{
    printf("Welcome to C!\n"); // this is a function that displays the text "Welcome to C! on the screen"
} // function end


// if you have installed a compiler on your personal computer, 
// you can try this on the command line to compile the source code into a executeable program

// $ gcc -o welcome welcome.c
// after which you can run the welcome program the command line to see the output