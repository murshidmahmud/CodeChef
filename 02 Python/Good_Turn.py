t = int(input())
for x in range(0,t):
    a,b = map(int, input().split())
    sum = a+b

    if sum>6:
        print("YES")

    else:
        print("NO")
        