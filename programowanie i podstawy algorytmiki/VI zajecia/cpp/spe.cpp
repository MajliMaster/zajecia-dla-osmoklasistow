#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> T(N+1);
    for (int i=1; i<=N; i++) cin >> T[i];

    vector <int> odwiedzone(N + 1);
    long long wynik = (long long)N * N;

    for (int i=1; i<=N; i++) {
        if (odwiedzone[i] == 0) {
            int wybrany = i;
            while (odwiedzone[wybrany] == 0) {
                odwiedzone[wybrany] = i;
                wybrany = T[wybrany];
            }
            if (odwiedzone[wybrany] == i) {
                long long suma_cyklu = 0;
                int koniec_cyklu = wybrany;
                suma_cyklu += wybrany;
                wybrany = T[wybrany];
                while (koniec_cyklu != wybrany) {
                    suma_cyklu += wybrany;
                    wybrany = T[wybrany];
                }
                wynik = min(suma_cyklu, wynik);
            }
        }
    }
    cout << wynik << "\n";
}
