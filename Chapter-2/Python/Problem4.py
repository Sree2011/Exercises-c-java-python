t = float(input("Enter temperature: "))
v = float(input("Enter velocity: "))
wcf = 35.74+(0.6215*t) +((0.4275*t) - 35.75)*(v**0.16)

print("Temperature: %.3f" %t)
print("Velocity: %.3f" %v)
print("Wind Chill Factor: %.3f" %wcf)