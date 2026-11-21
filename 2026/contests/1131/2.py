t = int(input())
m = []
for i in range(0, t):
    x,y,z = input().split()
    x,y,z = int(x),int(y),int(z)
    p = x+y+z
    if x >= y: k = 'P' *p
    elif y >= z: k = 'R' *p
    else: k = 'S' *p
    m.append(k)
for i in m:
    print(i)
