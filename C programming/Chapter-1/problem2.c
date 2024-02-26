/*              PROBLEM 2
 * The length and breadth of a rectangle and radius of a circle are
 * input through the keyboard. Write a program to calculate the area
 * and perimeter of the rectangle, and the area and circumference of
 * the circle.
 */

// import the required libraries
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    // declare the variables
    int l, b, r;

    // take input
    printf("Enter the length of rectangle:\n");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle:\n");
    scanf("%d", &b);
    printf("Enter the radius of circle:\n");
    scanf("%d", &r);
    // do the calculations
    int rect_area = l * b;
    int rect_per = 2 * (l + b);

    float circle_area = M_PI * pow(r, 2);
    float circle_cir = 2 * M_PI * r;

    // print the input variables
    printf("length of rectangle: %d\n", l);
    printf("breadth of rectangle: %d\n", b);
    printf("Radius of the circle: %d\n", r);

    // print the results
    printf("area of rectangle: %d\n", rect_area);
    printf("perimeter of rectangle: %d\n", rect_per);
    printf("area of the circle: %f\n", circle_cir);
    printf("perimeter of the circle: %f\n", circle_area);
}
