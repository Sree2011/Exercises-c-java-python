/*      PROBLEM 2
 * Write a program to recieve Cartesian Coordinates
 * (x,y) of a point and convert them into polar
 * coordinates (r,phi)
 *
 * Hint: r = sqrt(x^2+y^2), phi = tan-1(y/x)
 */

// include libraries

#include <stdio.h>
#include <math.h>

int main()
{
    // declare the variables
    float x, y;

    // take the input
    printf("Enter the cartesian co-ordinates:\n");
    scanf("%f %f", &x, &y);

    // calculate the output
    float r = sqrt(pow(x, 2) + pow(y, 2));
    float phi = atan(y / x);

    // print the results

    printf("Cartesian coordinates (x,y): (%f,%f)\n", x, y);
    printf("Polar coordinates (r,phi): (%f,%f)\n", r, phi);

    return 0;
}