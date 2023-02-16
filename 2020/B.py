n, k = int(input()), int(input())
a = list(map(int, input().split()))
s = sorted(a)
cnt = 0
for i in range(k - 1):
    if i + 1 > s[cnt]:
        cnt += 1
print(k - cnt)
cnt = 0
for i in range(n - 1):
    if cnt + 1 <= s[i]:
        cnt += 1
print(min(cnt, k - 1) + 1)
