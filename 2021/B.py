for i in range(int(input())):
    n = int(input())
    mx = 0
    mn = n
    for a in range(1, int(n ** 0.5) + 1):
        b = (n - a) / (1 + 2 * a)
        if int(b) != b or b == 0:
            continue
        mx = max(mx, a * b)
        mn = min(mn, a * b)
    if mx == 0 or mn == 0:
        print(-1)
        continue
    print(int(mn), int(mx), sep=' ')
