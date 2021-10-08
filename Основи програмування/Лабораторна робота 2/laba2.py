
a = input("a=")
b = input("b=")
c = input("c=")

if a == b and b == c and a == c:
    print("a=b=c")
elif a == b:
    print("a=b")
elif b == c:
    print("b=c")
elif a == c:
    print("a=c")
else:
    print("No equal numbers")
