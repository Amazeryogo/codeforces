t = int(input())
z = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    o,e = sorted(a[1::2]),sorted(a[0::2])
    t = sum(a)
    for x, y in zip(o, e):
        s = x + y
        if s >= 0: break
        t -= 2 * s
    z.append(t)
for i in z:
    print(i)
