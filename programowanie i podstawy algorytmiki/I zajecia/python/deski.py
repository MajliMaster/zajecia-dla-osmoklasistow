N = input()
L = [int(x) for x in input().split()]

L.sort(reverse=True)
result = 0
# Jeśli są co najmniej 4 deski, to możemy zbudować piaskownicę
if len(L) >= 4:
    result = pow(L[3], 2)
print(result)
