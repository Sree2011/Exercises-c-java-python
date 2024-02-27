
length,breadth,radius = list(map(int,input().split()))
area_rec = length*breadth
per_rec = 2*(length+breadth)
area_cir = 3.14*radius^2
per_cir = 2*3.14*radius

print(f"Length of the rectangle is: {length}")
print(f"Breadth of the rectangle is: {breadth}")
print(f"Radius of the circle is: {radius}")
print(f"Area of the rectangle is: {area_rec}")
print(f"Perimeter of the rectangle is: {per_rec}")
print(f"Area of the circle is: {area_cir}")
print(f"Perimeter of the circle is: {per_cir}")