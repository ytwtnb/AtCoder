def distance(p1, p2):
    return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1])

n, m = map(int, input().split())

student = []
checkpoint = []

for i in range(0, n):
    a, b = map(int, input().split())
    student.append((a, b))

for j in range(0, m):
    c, d = map(int, input().split())
    checkpoint.append((c, d))

for i in range(0, n):
    dist = 100000000000
    ans_num = 0
    for j in range(0, m):
        if distance(student[i], checkpoint[j]) < dist:
            dist = distance(student[i], checkpoint[j])
            ans_num = j + 1
    print(ans_num)
