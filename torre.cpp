#include <iostream>

using namespace std;

void readMatriz(int **M, int n) {
    for (int i = 0; i < n; i++) {
        M[i] = new int [n];
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }
}

int torreSum(int **M, int n, int i, int j) {
    int sum = 0;
    for (int k = 0; k < n; k++) {
        sum += M[i][k];
        sum += M[k][j];
    }
    sum -= M[i][j];
    sum -= M[i][j];
    return sum;
}

int matrizPeso(int **M, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (torreSum(M, n, i, j) > sum) {
                sum = torreSum(M, n, i, j);
            }
        }
    }
    return sum;
}

int main() {
    int n, M[1000][1000];
    int sumLine[1000], sumColum[1000];
    int soma;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
            sumLine[i] += M[i][j];
            sumColum[j] += M[i][j];
        }
    }

    int maior = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma = sumLine[i] + sumColum[j] - 2*(M[i][j]);
            if (soma > maior) {
                maior = soma;
            }
        }
    }

    cout << soma << endl;

    







    return 0;
}