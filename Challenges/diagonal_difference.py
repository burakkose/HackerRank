N = int(input())
d1, d2 = 0, N - 1
r1, r2 = 0, 0
i = 0
while i < N:
    l = list(map(int, input().strip().split(' ')))
    r1 += l[d1 % N]
    r2 += l[d2 % N]
    d1 += N + 1
    d2 += N - 1
    i += 1

print(abs(r1 - r2))
