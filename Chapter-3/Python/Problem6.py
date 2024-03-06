x1,y1 = map(float,input().split())
x2,y2 = map(float,input().split())
x3,y3 = map(float,input().split())
print("Point A: (%f,%f)"%(x1,y1))
print("Point B: (%f,%f)"%(x2,y2))
print("Point C: (%f,%f)"%(x3,y3))
slope_xy = (y2-y1)/(x2-x1)
slope_yz = (y3-y2)/(x3-x2)
slope_xz = (y3-y1)/(x3-x1)
if x1 == x2 or x2 == x3 or x3 == x1:
    print("Error: Points A and B have the same x-coordinate. Cannot calculate slope.")
else:
    if slope_xy == slope_yz and slope_yz == slope_xz:
        print("Collinear Points")
    else:
        print("Non-collinear points")


