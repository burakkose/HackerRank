string1 = input("")
string2 = input("")

lenStrings = len(string1)
arr = [[0]*(lenStrings+1) for n in range(lenStrings+1)]

for i in range(1,lenStrings+1):
    for j in range(1,lenStrings+1): 
        match = arr[i-1][j-1]
        if string1[i-1] == string2[j-1]:
            match += 1
        arr[i][j] = max(arr[i][j-1],arr[i-1][j],match)

print(arr[lenStrings][lenStrings])