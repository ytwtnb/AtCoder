n = int(input())
d, x = map(int, input().split())

for i in range(n):
    a = int(input())
    x += int(d / a)
    if d % a > 0:
        x += 1

print(int(x))
