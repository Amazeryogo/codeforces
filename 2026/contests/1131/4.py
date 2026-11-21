t = int(input())
z = []
for _ in range(t):
    n = int(input())
    a = sorted(map(int, [int(x) for x in input().split()]))
    m = a[n // 2]
    c = sum(abs(x - m) for x in a)
    z.append(f"{c} {a[-1] - a[0]}")
for i in z:
    print(i)
