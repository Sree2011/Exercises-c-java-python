/*      PROBLEM - 3
 * Write a program to recieve values of latitude(L1,L2) and longitude(G1,G2),
 * in degrees, of two places on earth and output the distance between the
 * distance(D) between them in nautical miles. The formula for the distance
 * in nautical miles is:
 * D = 3963 cos-1(sin L1 sin L2+ cos L1 cos L2*cos(G2-G1))
 */

// include libraries
#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables and take input
    float l1, l2, g1, g2;
    printf("Enter the latitudes:");
    scanf("%f %f", &l1, &l2);

    printf("Enter the longitudes:");
    scanf("%f %f", &g1, &g2);

    float D = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("Distance in nautical miles:\n %f", D);

    return 0;
}