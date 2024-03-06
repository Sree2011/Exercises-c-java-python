def is_leap(year):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        return True
    else:
        return False

if __name__ == '__main__':
    odd_days = 0
    year = int(input("Enter a year: "))
    for i in range(1,year):
        if is_leap(year):
            odd_days += 366
        else:
            odd_days += 365
    
    odd_days %= 7

    weekdays = ["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
    print(f"The day of the week at 01/01/{year} is {weekdays[odd_days]}")

