count = 0
while count<5:
    print(count, end=" ")
    count +=2

# 
x = 5
while x>0:
    print(x, end = " ")
    x -=1

# 
number = 10
while number>0:
    print(number)
    number -=2

# 
num = int(input())

n = 1
while n<=num:
    print(n*n, end=" ")
    n +=1


# Factorial value 5!:
num = int(input())

factorial = 1
while num > 0:
    factorial *=num
    num -=1

print(factorial)


# vowel count:
vowel = str(input())

ans = 0
i = 0

while i < len(vowel):
    c = vowel[i]
    if c =='a' or c =='e' or c =='i' or c =='o' or c =='u':
        ans +=1
    i +=1

print(ans)