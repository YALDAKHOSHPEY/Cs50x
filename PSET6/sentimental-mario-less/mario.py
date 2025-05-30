from cs50 import get_int

while True:
    H = get_int("hight: ")
    if H > 0 and H <= 8:
        break

for i in range(H):
    print(" " * (H - i - 1) + "#" * (i + 1))
