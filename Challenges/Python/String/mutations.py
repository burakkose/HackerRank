string = input()
n, m = input().strip().split()
print(string[:int(n)] + m + string[int(n) + 1:])
