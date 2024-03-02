a,b = list(map(int,input("Enter the numbers to swap: ").split()))
temp = 0

print(f"Before swap: c = {a}, d = {b}")
temp = a
a = b
b = temp

print(f"After swap: c = {a}, d = {b}")
