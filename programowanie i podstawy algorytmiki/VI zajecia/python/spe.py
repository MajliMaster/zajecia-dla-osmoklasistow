N = int(input())
T = [0] + list(map(int, input().split()))

odwiedzone = [0] * (N+1)

wynik = N * N

for i in range(1, N+1):
    if odwiedzone[i] == 0:
        wybrany = i
        while odwiedzone[wybrany] == 0:
            odwiedzone[wybrany] = i
            wybrany = T[wybrany]
        if odwiedzone[wybrany] == i:
            suma_cyklu = 0
            koniec_cyklu = wybrany
            suma_cyklu += wybrany
            wybrany = T[wybrany]
            while wybrany != koniec_cyklu:
                suma_cyklu += wybrany
                wybrany = T[wybrany]
            wynik = min(suma_cyklu, wynik)

