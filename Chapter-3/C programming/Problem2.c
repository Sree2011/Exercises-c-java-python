#include <stdio.h>
int main()
{
    // declare variables and take input
    int ram, shyam, ajay;
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram < shyam && ram < ajay)
    {
        printf("Ram is youngest");
    }
    else if (shyam < ram && shyam < ajay)
    {
        printf("Shyam is youngest");
    }
    else
    {
        printf("Ajay is youngest");
    }
    return 0;
}