#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, b, ar, per;
    scanf("%f %f", &l, &b);
    ar = l * b;
    per = 2 * (l + b);
    if (ar > per)
    {
        printf("Area is greater than the perimeter of the rectangle");
    }
    else
    {
        printf("Area is less than or equal to the perimeter of the rectangle");
    }
}