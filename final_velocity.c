/* program than asks the user to enter the initial velocity and acceleration
of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints
the final velocity, v, and distance traversed, s, using the following equations.

a) v = u + at
b) s = ut + (1/2)at**2

*/

#include <stdio.h>

// function main starts program execution
int main()
{
    int u; // initial velocity variable
    int a; // acceleration of the body variable
    int t; // time elasped variable
    int v; // final velocity
    int s; // distance traversed

    printf("Enter a value for the initial velocity, accleration, and time elasped: \n"); // prompt
    scanf("%d%d%d", &u, &a, &t); // read the value into u, a and t

    v = u + (a * t);
    s = u * t + ((1/2)*(a * t * t));

    printf("Final Velocity is %d \nDistance traversed is %d \n", v, s);


}// end of the main function 