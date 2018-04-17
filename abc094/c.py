import copy

n = int(input())
x = list(map(int, input().split()))
x_sort = copy.deepcopy(x)
x_sort.sort()

center_a = x_sort[int(n / 2) - 1]
center_b = x_sort[int(n / 2)]

for i in range(n):
    if x[i] <= center_a:
        print(center_b)
    else:
        print(center_a)
