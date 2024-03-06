#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    float slope_xy, slope_yz, slope_xz;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    scanf("%f %f", &x3, &y3);

    slope_xy = (y2 - y1) / (x2 - x1);
    slope_yz = (y3 - y2) / (x3 - x2);
    slope_xz = (y3 - y1) / (x3 - x1);

    if (slope_xy == slope_yz && slope_yz == slope_xz)
    {
        printf("Collinear points");
    }
    else
    {
        printf("Non-collinear points");
    }
}