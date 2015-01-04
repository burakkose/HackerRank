# https://www.hackerrank.com/challenges/sherlock-and-divisors
from math import sqrt

for _ in range(int(input(""))):
    num = int(input(""))
    divisible = 0
    for i in range(1,int(sqrt(num)) + 1):
        if num % i == 0:
            if i % 2 == 0:
                divisible += 1
            k = int(num/i)
            if k % 2 == 0 and k != i:
                divisible += 1
    print(divisible)
