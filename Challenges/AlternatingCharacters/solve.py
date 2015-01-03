strings = []
for i in range(int(input(""))):
    strings.append(input(""))
    index = 0
    deletion = 0
    for j in range(1,len(strings[i])):
        if strings[i][index] == strings[i][j]:
            deletion += 1
        else: index = j
    print(deletion)
