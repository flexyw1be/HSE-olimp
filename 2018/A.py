n, m = map(int, input().split())
a = list(map(int, input().split()))
dct = {i: a.count(i) for i in set(a)}
dct1 = {i: 0 for i in set(a)}
for i in a:
    dct1[i] += 1
    if dct1[i] == dct[i] and dct[i] == max(dct.values()):
        print(i)
        break
