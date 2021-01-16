#include <bits/stdc++.h>
using namespace std;

int suma_liczb(const vector<int>& liczby) {
  int suma = 0;
  for (int x : liczby)
    suma += x;
  return suma;
}

vector<int> wektor_cyfr(long long x) {
  vector<int> cyfry;
  for (int i = 0; i < 19; i++) {
    cyfry.push_back(x % 10);
    x /= 10;
  }
  reverse(cyfry.begin(), cyfry.end());
  return cyfry;
}

vector<int> ustaw(const vector<int>& cyfry_a, const vector<int>& cyfry_b) {
  vector<int> cyfry_c = cyfry_b;
  bool dziewiatki = false;
  for (int i = 0; i < 19; i++) {
    if (dziewiatki)
      cyfry_c[i] = 9;
    else if (cyfry_a[i] != cyfry_b[i]) {
      cyfry_c[i] = cyfry_b[i] - 1;
      dziewiatki = true;
    }
  }
  return cyfry_c;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  long long a, b;
  cin >> a >> b;
  vector<int> cyfry_a = cyfry_liczby(a), cyfry_b = cyfry_liczby(b);
  vector<int> cyfry_c = popraw(cyfry_a, cyfry_b);
  int wynik1 = suma_liczb(cyfry_b);
  int wynik2 = suma_liczb(cyfry_c);
  cout << max(wynik1, wynik2) << "\n";

  return 0;
}
