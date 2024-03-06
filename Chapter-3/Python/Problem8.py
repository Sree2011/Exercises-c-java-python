x,y = map(float,input().split())
if x == 0 and y == 0:
    print("The point lies on origin")
elif x != 0 and y == 0:
    print("The point lies on X-axis")
elif x == 0 and y != 0:
    print("The point lies on Y-axis")
else:
    print("The point lies on XY Plane");