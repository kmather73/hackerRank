#!/bin/python3

import sys


n = int(input().strip())
num = 1
for i in range(1, n+1):
    num = num * i

print(num)