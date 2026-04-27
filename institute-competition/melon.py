# w = int(input())

# if w >= 1 and w <= 100:
#     if w % 2 == 0:
#         result = w / 2
#         if result % 2 == 0:
#             print("YES")
#         else:
#             print("NO")

word = input().split()
if len(word) > 10:
    print(word[0] + str(len(word) - 2) + word[-1])
else:
    print(word)
