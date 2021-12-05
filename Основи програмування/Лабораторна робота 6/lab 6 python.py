import math


def find_length(x, y):
    length = math.sqrt(x ** 2 + y ** 2)
    return length


def closest_point(quantity):
    x = float(input("\nx1 = "))
    y = float(input("y1 = "))
    closest_x = x
    closest_y = y
    min_length = find_length(x, y)
    for i in range(0, quantity - 1):
        x = float(input("\nx" + str(i + 2) + " = "))
        y = float(input("y" + str(i + 2) + " = "))
        if find_length(x, y) < min_length:
            closest_x = x
            closest_y = y
    print(f"\nНайближча точка до початку координат: ({closest_x}, {closest_y})")


n = int(input("Введіть кількість точок: "))
closest_point(n)
