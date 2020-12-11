#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long long N;
    cin >> N;

    vector <int> digits;
    while (N > 0){
        digits.push_back(N % 5);
        N /= 5;
    }
    reverse(digits.begin(), digits.end());
    for (int digit : digits) {
        cout << digit * 2;
    }
}
