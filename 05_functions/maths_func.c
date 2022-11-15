#include <math.h>
#include <stdio.h>

int main(void)
{

    int number;
    double power;
    double square_root;
    double cube_root;
    double exponential;
    double natural_log;
    double logarithm;
    double floating_abs;
    double float_mod;
    double sine;
    double cosine;
    double tangent;

    printf("Please Enter a number: ");
    scanf("%d", &number);

    power = pow(number, 2.0);
    square_root = sqrt(number);
    cube_root = cbrt(number);
    exponential = exp(number);
    natural_log = log(number);
    logarithm = log10(number);
    floating_abs = fabs(number);
    float_mod = fmod(number, 2.3);
    sine = sin(number);
    cosine = cos(number);
    tangent = tan(number);

    printf("The number entered is %d\n", number);
    printf("it square is %.0f\n", power);
    printf("it square root is %.2f\n", square_root);
    printf("it Cube square root is %.2f\n", cube_root);
    printf("it exponential is %.2f\n", exponential);
    printf("it Natural log is %.2f\n", natural_log);
    printf("it Logarithm is %.2f\n", logarithm);
    printf("it Floating absolute value is %.2f\n", floating_abs);
    printf("it Floating Mod of %d and %f is %.2f\n", number, 2.3, float_mod);
    printf("it sine is %.2f\n", sine);
    printf("it cosine is %.2f\n", cosine);
    printf("it tangent is %.2f\n", tangent);


    return (0);
}