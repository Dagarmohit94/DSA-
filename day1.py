# This program prints Hello, world!

print("enter the value btw 1 to 3")
value = int(input("enter a no.:"))
balance = 1000
if value == 1:
    balance += 500
    print(balance)
elif value == 2:
    balance -= 500
    print(balance)
else:
    print(balance)
