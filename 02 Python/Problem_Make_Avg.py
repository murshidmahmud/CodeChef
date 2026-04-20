t = int(input())
for x in range(0,t):
    a, b = map(int, input().split())

    # if (a+b) % 2 == 0:
    #     print((a+b) // 2)

    # else:
    #     print(-1)

    sum = a+b

    averg = sum%2

    ans = sum //2

    if averg == 0:
        print(ans)

    else:
        print(-1)