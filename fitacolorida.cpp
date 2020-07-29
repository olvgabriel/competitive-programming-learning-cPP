#include <iostream>
using namespace std;

int main() {

    /*
    8
    -1 -1 0 -1 -1 -1 0 -1
    */
    int n, contador;
    cin >> n;
    int zeroPosition = -n*2;

    int line[n];

    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    for (int j = 0; j < n; j++) {
        if (line[j] == 0) {
            zeroPosition = j;
            continue;
        }
        contador = 0;
        for (int k = j; k < n; k++) {
            if (line[k] != 0) {
                contador++;
            } else {
                break;
            }
        }
        if (contador > (j-zeroPosition)) {
            line[j] = j-zeroPosition;
        } else {
            line[j] = contador;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << line[i] << " ";
    }
    cout << endl;







    return 0;
}