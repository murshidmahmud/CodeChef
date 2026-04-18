t = int(input())
for i in range(0,t):
    a = int(input())

    ans = 100

    for c in range(101):
        w = 3*c-a

        if w<0:
            continue

        u = 100-c-w

        if u>=0:
            ans = min(ans, w)

    print(ans)