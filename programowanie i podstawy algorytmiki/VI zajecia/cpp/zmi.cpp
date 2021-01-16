#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int zakryte = 0;

  for (int i=1; i<(int)s.size(); i++) {
    if (s[i-1] == s[i]) {
        zakryte++;
    }
  }

  cout << zakryte << "\n";
}
