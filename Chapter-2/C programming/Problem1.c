/* PROBLEM 1
 * If a five-digit number is input through the keyboard, write a program to calculate
 * the sum of its digits.
 */

// include libraries
#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables
    int num;
    scanf("%d", &num);
    int rem = 0, sum = 0;
    // extract all digits, and add to sum
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }
    printf("%d", sum);

    return 0;
}