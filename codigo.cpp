#include <iostream>
using namespace std;

int main() {
    int n, cont = 0;
    cin >> n;
    int seq[n];

    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int j = 1; j < n-1; j++) {
        bool hundred = true;
        if (seq[j-1] != 1) {
            hundred = false;
        } else if (seq[j] != 0) {
            hundred = false;
        } else if (seq[j+1] != 0) {
            hundred = false;
        } else {
            cont++;
        }
    }

    cout << cont << endl;




    return 0;
}