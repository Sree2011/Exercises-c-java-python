#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, h, k, d, r;
    scanf("%f %f", &x, &y);
    scanf("%f %f", &h, &k);
    scanf("%f", &r);
    d = sqrt(pow(x - h, 2) + pow(y - k, 2));

    if (d < r)
    {
        printf("The point (%f,%f) lies inside the circle with center (%f,%f)", x, y, h, k);
    }
    else if (d == r)
    {
        printf("The point (%f,%f) lies on the circle with center (%f,%f)", x, y, h, k);
    }
    else
    {
        printf("The point (%f,%f) lies outside the circle with center (%f,%f)", x, y, h, k);
    }
    return 0;
}