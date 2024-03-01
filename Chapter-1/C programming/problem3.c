/*          PROBLEM 3
 * Paper of size A0 has dimensions 1189 cm x 841 mm. Each subsequent size A(n)
 * is defined as A(n-1) cut in half, parallel to its shorter sides. Thus, a paper
 * of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate
 * and print the paper sizes A1 to A8.
 */

// import libraries
#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables

    // h = sqrt(2)*w
    // w = w

    // CALCULATE THE SIZES AND PRINT
    // A0:
    int h = 1189;
    int w = 841;
    printf("Size of A0: %dx%d\n", w, h);
    for (int i = 1; i < 9; i++)
    {
        printf("In loop:\n");
        w = pow(2, -0.25 - 0.5 * i) * 1000;
        h = pow(2, 0.25 - 0.5 * i) * 1000;
        printf("Size of A%d: %dx%d\n", i, w, h);
    }

    printf("Outside loop;");
    // A1:
    w = pow(2, -0.25 - 0.5 * 1) * 1000;
    h = pow(2, 0.25 - 0.5 * 1) * 1000;
    printf("Size of A1: %dx%d\n", w, h);

    // A2:
    w = pow(2, -0.25 - 0.5 * 2) * 1000;
    h = pow(2, 0.25 - 0.5 * 2) * 1000;
    printf("Size of A2: %dx%d\n", w, h);

    // A3:
    w = pow(2, -0.25 - 0.5 * 3) * 1000;
    h = pow(2, 0.25 - 0.5 * 3) * 1000;
    printf("Size of A3: %dx%d\n", w, h);

    // A4:
    w = pow(2, -0.25 - 0.5 * 4) * 1000;
    h = pow(2, 0.25 - 0.5 * 4) * 1000;
    printf("Size of A4: %dx%d\n", w, h);

    // A5:
    w = pow(2, -0.25 - 0.5 * 5) * 1000;
    h = pow(2, 0.25 - 0.5 * 5) * 1000;
    printf("Size of A5: %dx%d\n", w, h);

    // A6:
    w = pow(2, -0.25 - 0.5 * 6) * 1000;
    h = pow(2, 0.25 - 0.5 * 6) * 1000;
    printf("Size of A6: %dx%d\n", w, h);

    // A7:
    w = pow(2, -0.25 - 0.5 * 7) * 1000;
    h = pow(2, 0.25 - 0.5 * 7) * 1000;
    printf("Size of A7: %dx%d\n", w, h);

    // A8:
    w = pow(2, -0.25 - 0.5 * 8) * 1000;
    h = pow(2, 0.25 - 0.5 * 8) * 1000;
    printf("Size of A8: %dx%d\n", w, h);
}