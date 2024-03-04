// include libraries
#include <stdio.h>
#include <math.h>

// count the number of digits in input number

int countDigits(int value)
{
    int result = 0;
    while (value != 0)
    {
        value /= 10;
        result++;
    }
    return result;
}

int main()
{
    // declare variables and take input
    int num, rem;

    printf("Enter a number: \n");
    scanf("%d", &num);
    int n = countDigits(num);
    int a[n];
    int temp = num;
    // reverse the digits and store them into array
    while (temp != 0)
    {
        for (int i = 0; i < n; i++)
        {
            rem = temp % 10;
            a[i] = rem;
            temp /= 10;
        }
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s * 10 + a[i];
    }
    printf("Original number = %d\n", num);
    printf("Reversed number = %d\n", s);

    // check if num is a pallindrome

    if (num == s)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not pallindrome");
    }
}