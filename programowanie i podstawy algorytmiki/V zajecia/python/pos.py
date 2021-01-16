# def suma_cyfr(x):
#     if x == 0:
#         return 0
#     return (x % 10) + suma_cyfr(x // 10)
#
#
# a, b = map(int, input().split())
# # lista = []
# # for x in range(a, b+1):
# #     list.append(suma_cyfr(x))
# # print(max(list))
# print(max([suma_cyfr(x) for x in range(a, b+1)]))


# def suma_cyfr(x):
#     if x == 0:
#         return 0
#     return (x % 10) + suma_cyfr(x // 10)
#
# def cyfra_znaczaca(x):
#     if x >= 10:
#         return cyfra_znaczaca(x // 10)
#     return x
#
# def liczba_cyfr(x):
#     if x == 0:
#         return 0
#     return 1 + liczba_cyfr(x // 10)
#
#
# a, b = map(int, input().split())
# wynik1 = suma_cyfr(b)
# wynik2 = (cyfra_znaczaca(b) - 1) + 9 * (liczba_cyfr(b) - 1)
# print(max(wynik1, wynik2))


def lista_cyfr(x):
    cyfry = []
    for _ in range(19):
        cyfry.append(x % 10)
        x //= 10
    return cyfry[::-1]


def ustaw(cyfry_a, cyfry_b):
    cyfry_c = list(cyfry_b)
    dziewiatki = False
    for i in range(19):
        if dziewiatki:
            cyfry_c[i] = 9
        elif cyfry_a[i] != cyfry_b[i]:
            cyfry_c[i] = cyfry_b[i] - 1
            dziewiatki = True
    return cyfry_c


a, b = map(int, input().split())
cyfry_a, cyfry_b = lista_cyfr(a), lista_cyfr(b)
cyfry_c = ustaw(cyfry_a, cyfry_b)
wynik1 = sum(cyfry_b)
wynik2 = sum(cyfry_c)
print(max(wynik1, wynik2))