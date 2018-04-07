n = int(input())
a = list(map(int, input().split()))
s = abs(a[0])

for i in range(n - 1):
    s += abs(a[i] - a[i + 1])
s += abs(a[n - 1])

for i in range(n):
    if i == 0:
        print(s + abs(0 - a[i + 1]) - (abs(0 - a[i]) + abs(a[i] - a[i + 1])))
    elif i == n - 1:
        print(s + abs(a[i - 1] - 0) - (abs(a[i - 1] - a[i]) + abs(a[i])))
    else:
        print(s + abs(a[i - 1] - a[i + 1]) - (abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1])))
