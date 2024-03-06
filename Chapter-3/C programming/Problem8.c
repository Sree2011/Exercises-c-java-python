#include <stdio.h>

int main()
{

    float x, y;
    scanf("%f %f", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("The point lies on origin");
    }
    else if (x != 0 && y == 0)
    {
        printf("The point lies on X-axis");
    }
    else if (x == 0 && y != 0)
    {
        printf("The point lies on Y-axis");
    }
    return 0;
}