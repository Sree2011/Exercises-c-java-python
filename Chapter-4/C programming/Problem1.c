#include <stdio.h>

int main()
{

    char word;
    int a;
    scanf("%c", &word);
    a = (int)word;

    if (a >= 97 && a <= 122)
    {
        printf("%c is a Lowercase alphabet", word);
    }

    if (a >= 0 && a <= 64)
    {
        printf("%c is a Special symbol", word);
    }
    return 0;
}