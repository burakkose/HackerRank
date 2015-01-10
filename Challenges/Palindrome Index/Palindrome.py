for i in range(int(input())):
    inp = list(input())
    begin , end = 0 , len(inp) - 1
    if inp == inp[::-1]:
        print('-1')
        continue
    while begin < end:
        if inp[begin] != inp[end]:
            var = inp[begin+1:end+1]
            if var == var[::-1] : print(begin)
            else : print(end)
            break
        begin += 1
        end -= 1
