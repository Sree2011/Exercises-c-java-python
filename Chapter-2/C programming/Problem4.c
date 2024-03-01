/*      PROBLEM - 4
 * Wind chill factor is the felt air temperature on
 * exposed skin due to wind. The wind chill temperature
 * is always lower than the air temperature, and is
 * calculated using the following formula:
 * wcf = 35.74+0.6215t +(0.4275t - 35.75)*v^0.16
 * where t is temperature, v is wind velocity.
 * Write a program to recieve values of t and v and
 * calculate wcf.
 */

// import required libraries
#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables and take input
    float t, v, wcf;
    printf("Enter the temperature and velocity: \n");
    scanf("%f %f", &t, &v);
    printf("Temperature : %f\n", t);
    printf("Velocity : %f\n", v);
    // substitute in the formula
    wcf = 35.74 + (0.6215 * t) + (0.4275 * t) - 35.75 * pow(v, 0.16);

    // print the results

    printf("Wind chill factor: %f\n", wcf);

    return 0;
}