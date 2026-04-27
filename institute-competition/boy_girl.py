username = input()
unique_letters = set(username)

print(unique_letters)

if len(unique_letters) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
