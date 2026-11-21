t = int(input())
z = []
for i in range(0, t):
    m, n = input().split()
    p = input()
    q = list(input())
    o = ""
    for j in p:
        if j in q: q.remove(j)
        else: o += j
    if len(q) == 0 and sorted(o) == ['i', 's', 'x']: z.append("YES")
    else:z.append("NO")

for i in z:
    print(i)
