t = int(input())
for i in range(t):
    a, b, c =map(int, input().split())

    if (c%a!=0) and (c%b!=0):
        print("NONE")

    elif(c%a==0) and (c%b==0):
        print("ANY")

    else:
        print("CHICKEN")