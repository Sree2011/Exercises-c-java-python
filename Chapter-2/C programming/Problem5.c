/*      PROBLEM 5
 * If value of an angle is input through the keyboard,
 * write a program to print all its trigonometric ratios.
 */

// include the libraries
#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables and take input
    float a;
    printf("Enter angle: \n");
    scanf("%f", &a);

    // calculate trigonometric ratios:

    // Sine:
    printf("Sine of angle %.3f is %.3f\n", a, sin(a));

    // Cosine:
    printf("Cosine of angle %.3f is %.3f\n", a, cos(a));

    // Tangent:
    printf("Tangent of angle %.3f is %.3f\n", a, tan(a));

    // Cotangent:
    printf("Cotangent of angle %.3f is %.3f\n", a, (1 / tan(a)));

    // Secant:
    printf("Secant of angle %.3f is %.3f\n", a, (1 / cos(a)));

    // Cosecant:
    printf("Cosecant of angle %.3f is %.3f\n", a, (1 / sin(a)));
}