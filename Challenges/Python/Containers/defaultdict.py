from collections import defaultdict
d = defaultdict(list)
n, m = (int(i) for i in input().split())
for pos in range(n):
    d[input()].append(pos + 1)
for pos in range(m):
    print(*d.get(input(), [-1]), sep=' ')
