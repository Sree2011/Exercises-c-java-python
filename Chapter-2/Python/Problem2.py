import math as m
# take input
x,y = list(map(float,input().split()))
#calculate polar coordinates
r = m.sqrt(x**2+y**2)
phi = m.atan(y/x)
# display the results
print("Cartesian Coordinates: (%.3f,%.3f)"%(x,y))
print("Polar Coordinates: (%.3f,%.3f)" %(r,phi))