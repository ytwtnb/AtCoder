n, m, x = map(int, input().split())
cost_a = cost_b = 0

a = list(map(int, input().split()))
for i in range(m):
    if a[i] < x:
        cost_a += 1
    else:
        cost_b += 1
print(min(cost_a, cost_b))
