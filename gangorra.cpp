#include <iostream>

using namespace std;

int main() {

    int P1, C1, P2, C2;

    cin >> P1 >> C1 >> P2 >> C2;

    int left = P1 * C1;
    int right = P2 * C2;

    if (left == right) {
        cout << "0\n";
    } else {
        if (left > right) {
            cout << "-1\n";
        } else {
            cout << "1\n";
        }
    }








    return 0;
}