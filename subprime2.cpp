#include <iostream>

using namespace std;

int main() {

    while (true) {

        int b, n;
        int d, c, v;
        int help = 0;

        cin >> b >> n;

        if (b == 0 && n == 0) {
            break;
        }

        int fundo[b+1];

        for (int i = 1; i <= b; i++) {
            cin >> fundo[i];
        }

        for (int j = 0; j < n; j++) {
            cin >> d >> c >> v;
            fundo[d] -= v;
            fundo[c] += v;
        }

        for (int k = 1; k <= b; k++) {
            if (fundo[k] < 0) {
                help = 1;
                break;
            }
        }

        if (help) {
            printf("N\n");
        } else {
            printf("S\n");
        }

    }












    return 0;
}