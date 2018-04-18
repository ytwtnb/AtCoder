import math

a = list(map(int, input().split()))
a.sort()

if a[0] == a[1] == a[2]:
    print(0)
else:
    count = a[2] - a[1]
    a[1] += count
    a[0] += count
    if a[0] == a[1]:
        print(count)
    else:
        tmp_count = math.ceil((a[1] - a[0]) / 2)
        count += int(tmp_count)
        a[0] += tmp_count * 2
        if a[0] == a[1]:
            print(count)
        else:
            print(count + 1)
