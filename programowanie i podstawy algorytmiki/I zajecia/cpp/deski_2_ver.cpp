#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    vector <int> L(N);
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
    }
    sort(L.begin(), L.end());

    int side = L[N - 1] / 4;
    if (N >= 2){
        side = max(side, min(L[N - 1] / 3, L[N - 2]));
        side = max(side, L[N - 2] / 2);
    }

    if (N >= 3) {
        side = max(side, min(L[N - 1], L[N - 3]));
    }

    if (N >= 4) {
        side = max(side, L[N - 4]);
    }

    cout << (long long) side * side << "\n";

    return 0;
}
