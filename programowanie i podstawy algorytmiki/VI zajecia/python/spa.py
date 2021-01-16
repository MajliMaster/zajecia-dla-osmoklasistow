def dlugosc(a, b):
    wynik = 0
    while a != b:
        if a > b:
            a //= 2
        else:
            b //= 2
        wynik += 1
    return wynik


Q = int(input())
for _ in range(Q):
    a, b = map(int, input().split())
    print(dlugosc(a, b))
