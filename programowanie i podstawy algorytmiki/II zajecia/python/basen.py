N = int(input())
P = list(map(int, input().split()))
result = 1
up = True
for i in range(N-1):
    if up and P[i+1] < P[i]:
        up = False
        result += 1
    elif not up and P[i+1] > P[i]:
        up = True
        result += 1
print(result)
