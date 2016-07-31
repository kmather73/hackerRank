import sys

cache = [-1 for _ in range(21)]

def fib2(n, a, b):
    cache[1] = a
    cache[2] = b
    
    for i in range(3, n+1):
        cache[i] = cache[i-2] + (cache[i-1]**2)
        
    return cache[n]


for line in sys.stdin:
    nums = line.split()
    print( fib2(int(nums[2]),int(nums[0]),int(nums[1]) ))
