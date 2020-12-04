#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 1000 * 1000 + 5;
int L[MAX_N];

int main() {
    ios_base::sync_with_stdio(false);

    // Deklarujemy i wczytujemy zmienną N - liczbę desek,
    int N;
    cin >> N;
    // a następnie same długości desek do tablicy L.
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
    }
    // Sortujemy długości desek używając funkcji z biblioteki standardowej.
    sort(L, L + N);
    // Jeżeli desek jest mniej niż 4, to nie da się zbudować piaskownicy.
    // W przeciwnym przypadku budowa zawsze jest możliwa.
    if (N < 4) {
        cout << "0\n";
    } else {
        // Tablica L jest typu int, ale wynik może byc typu long long.
        // Dlatego musimy przed mnozeniem wykonać rzutowanie inta na long longa.
        cout << (long long)L[N - 4] * L[N - 4] << "\n";
        }
    return 0;
}

