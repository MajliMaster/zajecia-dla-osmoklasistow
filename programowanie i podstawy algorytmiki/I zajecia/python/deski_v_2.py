N = int(input())
L = list(map(int, input().split()))
L.sort()

# 1 deska   8/3 = 2 reszta 2 - 2 i 2/3  8//3 = 2
side = L[-1] // 4

# 2 deski
if N >= 2:
    side = max(side, min(L[-1] // 3, L[-2]))
    side = max(side, L[-2] // 2)

# 3 deski
if N >= 3:
    side = max(side, min(L[-1] // 2, L[-3]))

# 4 deski
if N >= 4:
    side = max(side, L[-4])

print(side * side)
