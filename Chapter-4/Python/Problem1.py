word = input()
a = ord(word)
print(word)
if a >= 97 and a <= 122:
    print("Lowercase Alphabet")
if a >= 0 or a <= 64:
    print("Special Symbol")
