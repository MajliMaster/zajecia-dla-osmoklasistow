#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    vector <string> heart = {
            " @@@   @@@ ",
            "@   @ @   @",
            "@    @    @",
            "@         @",
            " @       @ ",
            "  @     @  ",
            "   @   @   ",
            "    @ @    ",
            "     @     "};
    for (string i : heart) {
        for (int j = 0; j < N; ++j) {
            if (j > 0) cout << " ";
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}

