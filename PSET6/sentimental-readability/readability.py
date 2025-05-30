from cs50 import get_string

t = get_string("Text: ")

le = 0
wo = 1
se = 0
n = len(t)

for i in range(n):
    if t[i].isalpha():
        le += 1

    if t[i] == ' ':
        wo += 1

    if t[i] in ['.', '?', '!']:
        se += 1

L = 100 * (le / wo)
S = 100 * (se / wo)

# formula
index = round(0.0588 * L - 0.296 * S - 15.8)

if index >= 16:
    print("Grade 16+")
elif index < 1:
    print("Before Grade 1")
else:
    print(f"Grade {index}")
