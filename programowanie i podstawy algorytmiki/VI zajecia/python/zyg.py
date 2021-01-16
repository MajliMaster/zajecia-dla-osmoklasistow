from math import gcd

def euklides(p, q):
    if q == 0:
        return p
    return euklides(q, p % q)

zygzak = input()

p = 0
q = 0
for znak in zygzak:
    if znak == 'G':
        p += 1
    elif znak == 'P':
        q += 1

x = 0
y = 0
poprawny_zygzak = ""
while x < q or y < p:
    if (y+1) * q <= p * x:  # p/q <= (y+1)/x
        y += 1
        poprawny_zygzak += 'G'
    else:
        x += 1
        poprawny_zygzak += 'P'

if zygzak != poprawny_zygzak:
    print("NIE")
else:
    # d = gcd(p, q)
    d = euklides(p, q)
    licznik = p // d
    mianownik = q // d
    print(f"{licznik}/{mianownik}")