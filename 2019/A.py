import math

for i in range(3):
    n, m = map(int, input().split())
    s = 10 ** len(str(m))
    d = 1
    if n > m:
        print(0)
        continue
    for j in range(1, n + 1):
        d = d * (j % s) % m
    print(d)
