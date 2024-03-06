ram,shyam,ajay = list(map(int,input().split()))
if ram < shyam and ram < ajay:
    print("Ram is youngest")
elif shyam < ram and shyam < ajay:
    print("Shyam is youngest")
else:
    print("Ajay is youngest")