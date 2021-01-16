slowo = input()
usuniete = 0
for i in range(1, len(slowo)):
    if slowo[i-1] == slowo[i]:
        usuniete += 1
print(usuniete)