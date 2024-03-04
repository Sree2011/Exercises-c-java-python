# Count no.of digits in num
def CountDigits(num):
    result = 0
    while num != 0:
        num = num//10
        result +=1
    return result

if __name__ == '__main__':
    # Declare variables and take input
    num = int(input("Enter a number: "))
    n = CountDigits(num)
    a = []
    temp = num

    # Extract the digits from input and store
    while temp > 0:
        rem = temp%10
        a.append(rem)
        temp //= 10
    
    
    # Make a 5 digit number from array elements
    s = 0
    for i in range(n):
        s = (s * 10) + a[i]

    
    print("Original number: ",num)
    print("Reversed number: ",s)
    # Check if num is a pallindrome
    if s == num:
        print("Pallindrome")
    else:
        print("Not Pallindrome")
