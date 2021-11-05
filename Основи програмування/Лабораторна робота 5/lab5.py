m = int(input("m="))
while m <= 0:
    print("m - натуральне число")
    m = int(input("m="))
n = 0
s = -1
m1 = m
while m != 0:
    while m1 != 0:
        s += 1
        m1 = m1 // 2
    x = m % 2
    n = n + x * (2 ** s)
    m = m // 2
    s -= 1

print(f"n={n}")
