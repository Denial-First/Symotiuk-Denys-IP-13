import math


print("First point coordinates: ")
x1 = float(input("X: "))
y1 = float(input("Y: "))

print("Second point coordinates: ")
x2 = float(input("X: "))
y2 = float(input("Y: "))

res = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
print(f"Distance between these points equals {res}")
