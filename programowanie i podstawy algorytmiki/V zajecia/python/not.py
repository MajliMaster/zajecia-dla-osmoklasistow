# N = int(input())
# A = list(map(int, input().split()))
# Q = int(input())

# for _ in range(Q):
#     K = int(input())
#     wynik = 0
#     for i in range(N-1):
#         if A[i] < A[i+1]:
#             wynik += 1
#     print(wynik)


# def oblicz_podciagi_rosnace(N, A):
#     podciagi_rosnace = []
#     aktualna_dlugosc = 1
#     for i in range(N):
#         if A[i] < A[i+1]:
#             aktualna_dlugosc += 1
#         else:
#             podciagi_rosnace.append(aktualna_dlugosc)
#             aktualna_dlugosc = 1
#     return podciagi_rosnace
#
# def ile_fragmentow(podciagi_rosnace, K):
#     wynik = 0
#     for x in podciagi_rosnace:
#         wynik += max(0, x-K+1)
#     return wynik
#
# N = int(input())
# A = list(map(int, input().split()))
# A.append(0)
#
# podciagi_rosnace = oblicz_podciagi_rosnace(N, A)
#
# Q = int(input())
# for _ in range(Q):
#     K = int(input())
#     print(ile_fragmentow(podciagi_rosnace, K))

def oblicz_ile_podciagow_rosnacych(N, A):
    ile_podciagow = [0] * (N+1)
    akutalna_dlugosc = 1
    for i in range(N):
        if A[i] < A[i+1]:
            akutalna_dlugosc += 1
        else:
            ile_podciagow[akutalna_dlugosc] += 1
            akutalna_dlugosc = 1
    return ile_podciagow

def sumuj(ile_podciagow, N):
    wyniki = [0] * (N+2)
    suma = 0
    for i in range(N, 0, -1):
        suma += ile_podciagow[i]
        wyniki[i] = wyniki[i+1] + suma
    return wyniki

N = int(input())
A = list(map(int, input().split()))
A.append(0)

ile_podciagow = oblicz_ile_podciagow_rosnacych(N, A)
wyniki = sumuj(ile_podciagow, N)

Q = int(input())
for _ in range(Q):
    K = int(input())
    print(wyniki[K])

