import math as m
L1,L2 = list(map(float,input("Enter the latitudes:").split()))
G1,G2 = list(map(float,input("Enter the latitudes:").split()))
D = 3963*m.acos(m.sin(L1)*m.sin(L2) + m.cos(L1)*m.cos(L2)*m.cos(G2-G1))

print("Latitudes : (%.3f,%.3f)" %(L1,L2))
print("Longitudes : (%.3f,%.3f)" %(G1,G2))
print("Distance in nautical miles: %.3f" %(D))

