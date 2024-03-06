#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
bool is_leap(year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int odd_days, year;
    scanf("%d", &year);
    odd_days = 0;
    for (int i = 1; i < year; i++)
    {
        if (is_leap(year) == true)
        {
            odd_days += 366;
        }
        else
        {
            odd_days += 365;
        }
    }

    char weekdays[7][14] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int dayIndex = odd_days % 7;
    printf("The day at 01/01/%d is %s\n", year, weekdays[dayIndex]);

    return 0;
}