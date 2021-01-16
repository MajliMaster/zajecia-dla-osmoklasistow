#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 500001;

int n;
int ciag[MAX_N];

vector<int> oblicz_ile_podciagow_rosnacych() {
  vector<int> ile_podciagow(n+1, 0);
  int aktualna_dlugosc = 1;
  for (int i = 0; i < n; i++) {
    if (ciag[i] < ciag[i+1])
      aktualna_dlugosc++;
    else {
      ile_podciagow[aktualna_dlugosc]++;
      aktualna_dlugosc = 1;
    }
  }
  return ile_podciagow;
}

vector<int> sumuj(const vector<int>& ile_podciagow) {
  vector<int> wyniki(n+2, 0);
  int suma = 0;
  for (int i = n; i >= 1; i--) {
    suma += ile_podciagow[i];
    wyniki[i] = wyniki[i+1] + suma;
  }
  return wyniki;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> ciag[i];

  vector<int> ile_podciagow = oblicz_ile_podciagow_rosnacych();
  vector<int> wyniki = sumuj(ile_podciagow);

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int k;
    cin >> k;
    cout << wyniki[k] << "\n";
  }

  return 0;
}
