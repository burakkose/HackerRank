__author__ = 'burakks41'

from math import sqrt, fsum

eps = 0.001
maxln = 10 ** 6

def f(val):
    return (1 + sqrt(4 * val + 1)) / 2

def interal_f(val):
    return (val / 2) + ((4 * val + 1) ** 1.5) / 12

solutionList = [0]
for i in range(1, maxln + 1):
    solutionList.append(solutionList[i - 1] + f(i))

for _ in range(int(input())):
    num = int(input())
    sol = 0
    if num <= maxln:
        sol = solutionList[num - 1] / num
    else:
        sol = (interal_f(num) - interal_f(1)) / num
    print(sol)