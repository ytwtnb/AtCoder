n = int(input())
a = list(map(int, input().split()))

for i in range(n):
    ans = 0
    tmp = 0
    for j in range(n):
        if j != i:
            ans += abs(tmp - a[j])
            tmp = a[j]

    ans += abs(tmp - 0)
    print(ans)
