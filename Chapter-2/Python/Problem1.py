# take input
num = int(input())
s1 = 0
print("number num is = ",num)
# extract digits from the number and add to sum
while num > 0:
    rem = num%10
    s1+=rem
    print(s1)
    num//=10
# display the results
print("The sum of digits of num is : ",s1)