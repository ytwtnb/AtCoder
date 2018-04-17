import copy
#import scipy.misc as scm

n = int(input())
x = list(map(int, input().split()))
x_sort = copy.deepcopy(x)
x_sort.sort()

x_max = x_sort[n - 1]
center = x_sort[0]
for i in range(1, n - 1):
    if abs(center - x_max / 2) > abs(x_sort[i] - x_max / 2):
        center = x_sort[i]

print(x_max, center)
#print(int(scm.comb(x_max, center)))
