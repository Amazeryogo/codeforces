t = int(input())
z = []
for i in range(0, t):
    n = int(input())
    a = [0] + [int(v) for v in input().split()]
    if n == 1:
        z.append(str(a[1]))
        continue
    tot = sum(a)
    INF = float('inf')
    L = [0] * (n + 1)
    f = False
    for j in range(1, n + 1):
        if j == 1: L[j] = 0
        elif f: L[j] = 1
        elif a[1] >= 2: L[j] = j - 1
        else: L[j] = INF
        if j >= 2 and a[j] >= 2: f = True
    R = [0] * (n + 1)
    f = False
    for j in range(n, 0, -1):
        if j == n: R[j] = 0
        elif f: R[j] = 1
        elif a[n] >= 2: R[j] = n - j
        else: R[j] = INF
        if j <= n - 1 and a[j] >= 2: f = True
    best = -1
    for j in range(1, n + 1):
        if L[j] != INF and R[j] != INF:
            best = max(best, tot - L[j] - R[j])
    z.append(str(best))
for i in z:
    print(i)
