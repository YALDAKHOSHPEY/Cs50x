from cs50 import get_float

# change owed
cents = -1
while cents < 0:
    dollars = get_float("Change owed: ")
    cents = round(dollars * 100)

quarters = cents // 25
cents %= 25

dimes = cents // 10
cents %= 10

nickels = cents // 5
cents %= 5

pennies = cents

all_coins = quarters + dimes + nickels + pennies

# print all coins
print(all_coins)
