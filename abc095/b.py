n, x = map(int, input().split())
m = []
ans = n
m_min = 1000

for i in range(n):
    tmp = int(input())
    m.append(tmp)
    x -= tmp
    m_min = min(m_min, tmp)

ans += int(x / m_min)
print(ans)
