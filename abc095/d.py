n, c = map(int, input().split())
cal_max = 0
cal = 0
x_tmp = 0

# TODO: 逆回り
for i in range(n):
    x, v = map(int, input().split())
    cal += v - (x - x_tmp)
    cal_max = max(cal_max, cal)
    x_tmp = x

print(cal_max)
