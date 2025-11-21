from random import randint

a = randint(1,6)
b = randint(1,6)

if (a==6 and b==5) or (a==5 and b==6):
        print("Dau cu zaru 6 5 n-am nevoie de servici")
elif(a==6 and b==6):
        print("Dau cu zaru 6 6 ca mine nu se mai naste")
else:
        print(f"Dau cu zaru {a} {b}")