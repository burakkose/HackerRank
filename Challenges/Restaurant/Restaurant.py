from math import sqrt
def gcd(a, b):
    if b == 0:return a
    else:return gcd(b, a % b)
for _ in range(int(input())):
    l = input().split()
    x , y = int(l[0]),int(l[1])
    print(( x * y ) // (gcd(x,y) ** 2))
