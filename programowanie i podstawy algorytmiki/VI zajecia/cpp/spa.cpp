#include <bits/stdc++.h>
using namespace std;

int dlugosc_sciezki(long long a, long long b) {
  int wynik = 0;
  while (a != b) {
    wynik++;
    if (a > b)
      a /= 2;
    else
      b /= 2;
  }
  return wynik;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    long long a, b;
    cin >> a >> b;
    cout << dlugosc_sciezki(a, b) << "\n";
  }

  return 0;
}
