#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string heart = ""
                   " @@@   @@@ \n"
                   "@   @ @   @\n"
                   "@    @    @\n"
                   "@         @\n"
                   " @       @ \n"
                   "  @     @  \n"
                   "   @   @   \n"
                   "    @ @    \n"
                   "     @     \n";
    for (int i = 0; i < N; ++i) {
        cout << heart;
    }
    return 0;
}
