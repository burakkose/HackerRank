from collections import OrderedDict
n = int(input())
mapper = OrderedDict()
count = 0
while count < n:
    line = input()
    mapper.update({line: mapper.get(line, 0) + 1})
    count += 1
print(len(mapper))
print(*mapper.values(), sep=' ')
