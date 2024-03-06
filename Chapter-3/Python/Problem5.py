l,b = list(map(float,input().split()))
ar = l*b
per = 2*(l+b)
if ar < per:
    print("Area is greater than the perimeter of the rectangle")
else:
    print("Area is less than or equal to the perimeter of the rectangle")