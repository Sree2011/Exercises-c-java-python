/*      PROBLEM 6
 * Two numbers are input through two locations c and d.
 * Write a program to interchange contents of c and d.
 */

// include libraries
#include <stdio.h>

int main()
{
    // declare variables
    int a, b;

    // take the input
    printf("Enter the integers: \n");
    scanf("%d %d", &a, &b);

    // print the variables before swapping
    printf("Before Swapping: \n");
    printf("The first number: %d\n", a);
    printf("The second number: %d\n", b);

    // swap the variables using a third variable
    int temp;
    temp = a;
    a = b;
    b = temp;

    // print the variables after swapping
    printf("After Swapping: \n");
    printf("The first number: %d\n", a);
    printf("The second number: %d\n", b);
}