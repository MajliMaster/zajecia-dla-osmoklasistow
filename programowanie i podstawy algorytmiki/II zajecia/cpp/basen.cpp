#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int result = 1;
    bool up = true;

    int previous, actual;
    cin >> previous;
    for (int i = 1; i < N; ++i) {
        cin >> actual;
        if (up && previous > actual){
            ++result;
            up = false;
        }
        else if (!up && previous < actual){
            ++result;
            up = true;
        }
        previous = actual;
    }

    cout << result << "\n";
}
