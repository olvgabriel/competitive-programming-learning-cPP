#include <iostream>

using namespace std;

int main() {
    int n; 
    int v; 
    int vSorted = -1;
    int points = 0;
    int bigv = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v;
        if (v != vSorted) {
            points = 1;
            vSorted = v;
            continue;
        }
        points++;
        if (points > bigv) {
            bigv = points;
        }
    }

    cout << bigv << endl;


    return 0;
}