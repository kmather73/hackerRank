import sys
import math

def isKapreka(n):
    k = n**2
    d = len(str(n))
    
    l = k % (10**d)
    r = k // (10**d)
    
    return n == (l+r)

p = int(input().strip())
q = int(input().strip())

output = ""
for i in range(p, q+1):
    if isKapreka(i):
        output += str(i)+" "
        
if output == "":
    print("INVALID RANGE")
else:
    print(output)
