__author__ = 'burakks41'

line1 = input().split()
line2 = input().split()

flowers = int(line1[0])
persons = int(line1[1])

person = [0] * persons
flowers_cost = sorted([int(n) for n in line2],reverse=True)
sum = 0
for i in range(flowers):
    x, person[i % persons] = person[i % persons], person[i % persons] + 1
    sum += flowers_cost[i] * (x+1)
print(sum)
