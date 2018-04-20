a = int(input())
s = {}
for i in range(a):
    tmp = input()
    if tmp in s:
        s[tmp] += 1
    else:
        s[tmp] = 1

b = int(input())
t = {}
for i in range(b):
    tmp = input()
    if tmp in t:
        t[tmp] += 1
    else:
        t[tmp] = 1

ans = 0
for key, value in s.items():
    ans = max(value - t.get(key, 0), ans)

print(ans)