#include <iostream>

using namespace std;

int euklides(int p, int q) {
    if (q == 0) return p;
    return euklides(q, p % q);
}

int main() {
    string zygzak;
    cin >> zygzak;

    int p = 0;
    int q = 0;
    for (char znak : zygzak) {
        if (znak == 'G') p += 1;
        else if (znak == 'P') q += 1;
    }

    int x = 0;
    int y = 0;
    string poprawny_zygzak = "";
    while (x < q or y < p) {
        if ((long long) (y + 1) * q <= (long long) p * x) { // (y+1)/x = p/q
            y += 1;
            poprawny_zygzak += 'G';
        } else {
            x += 1;
            poprawny_zygzak += 'P';
        }
    }


    if (zygzak != poprawny_zygzak) {
        cout << "NIE\n";
    } else {
        // int d = gcd(p, q);
        int d = euklides(p, q);
        int licznik = p / d;
        int mianownik = q / d;
        cout << licznik << "/" << mianownik << "\n";
    }
}
