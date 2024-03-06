import math as m
x,y = map(float,input().split())
h,k = map(float,input().split())

r = float(input())

d = m.sqrt(((x-h)**2)+((y-k)**2))

if d < r:
    print(f"the point ({x},{y}) lies inside the circle with center ({h},{k})")
elif d == r:
    print(f"the point ({x},{y}) lies on the circle with center ({h},{k})")
else:
    print(f"the point ({x},{y}) lies outside the circle with center ({h},{k})")