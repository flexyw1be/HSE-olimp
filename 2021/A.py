for i in range(int(input())):
    n, d = map(int, input().split())
    l = 1
    r = n
    while l < r:
        mid = (l + r) // 2
        len = n // 2
        if (mid + len - 1) // mid <= d:
            r = mid
        else:
            l = mid + 1
    print(l)
