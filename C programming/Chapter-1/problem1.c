/*            PROBLEM 1
 * Temperature of a city in Farenheit degrees is input through the keyboard.
 * Write a program to convert this temperature into Centigrade degrees.
 */

#include <stdio.h>
int main()
{
    // Declare the variables
    float far;

    // take farenheit value as input
    printf("Enter farenheit value:\n");
    scanf("%f", &far);

    float cel = ((far - 32) / 1.8);
    printf("Celsius value: %f\n", cel);

    return 0;
}