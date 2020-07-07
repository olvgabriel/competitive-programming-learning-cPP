#include <iostream>

using namespace std;

int main() {
    
    int B, N; // num banco - num debentures
    int D, C, x;

    

    
    while (true) {

        cin >> B >> N;

        int bancos[B];

        if (B == 0 && N == 0) {
            break;
        }

        bool emprestimo = 0;

        

        for (int i = 0; i < B; i++) {
        cin >> bancos[i];
        }   
        
        for (int i = 0; i < N; i++) {
            cin >> D >> C >> x;
            bancos[D-1] -= x;
            bancos[C-1] += x;
        }

        for (int i = 0; i < B; i++) {
            if (bancos[i] < 0) {
                emprestimo = 1;
                break;
            }
        }

        if (emprestimo) {
            printf("N\n");
        } else {
            printf("S\n");
        }


    }





    return 0;
}