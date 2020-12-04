#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    string text;
    cin >> text;

    // Metoda 1
    for (char i : text) {
        if (i == 'a') cout << '4';
        else if (i == 'e') cout << '3';
        else if (i == 'i') cout << '1';
        else if (i == 'o') cout << '0';
        else if (i == 's') cout << '5';
        else cout << i;
    }
    cout << "\n";

    // Metoda 2
    vector <vector <char>> arr = {{'a', '4'}};
    for (vector <char> i : arr) {
        replace(text.begin(), text.end(), i[0], i[1]);
    }
    cout << text << "\n";
    return 0;
}