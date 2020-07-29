#include <iostream>

using namespace std;

int sumLine(int** M, int n) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += M[i][j];
        }
        return sum;
    }
    return 0;
}

int magicLines(int** M, int n) {
    int before = 0;
    bool isMagic = true;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += M[i][j];
        }
        if (before == 0) {
            before = sum;
        } else {
            if (before != sum) {
                isMagic = false;
                break;
            }
        }
    }
    if (isMagic) {
        return before;
    }
    return -1;
}





int magicColums(int** M, int n) {
    int before = 0;
    bool isMagic = true;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += M[j][i];
        }
        if (before == 0) {
            before = sum;
        } else {
            if (before != sum) {
                isMagic = false;
                break;
            }
        }
    }
    if (isMagic) {
        return before;
    }
    return -1;
}

int magicDiag(int** M, int n) {
    int before;
    bool isMagic = true;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += M[i][i];
    }

    before = sum;
    sum = 0;

    for (int i = 0; i < n; i++) {
        sum += M[i][(n-1)-i];
    }

    if (before != sum) {
        isMagic = false;
    }

    if (isMagic) {
        return before;
    }
    return -1;
}

bool isMagic(int** M, int n) {
    if (magicLines(M, n) != -1 && magicColums(M, n) != -1) {
        if (magicDiag(M, n) != -1) {
            if (magicLines(M, n) == magicColums(M, n)) {
                if (magicLines(M, n) == magicDiag(M, n)) {
                    return true;
                }
                return false;
            }
            return false;
        }
        return false;
    }
    return false;
}

void readArray(int** M, int n) {
    for (int i = 0; i < n; i++) {
        M[i] = new int[15];
        for (int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }
}

void printArray(int** M, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    int** M = new int *[15];

    cin >> n;

    readArray(M, n);

    if (!isMagic(M, n)) {
        cout << -1 << endl;
    } else {
        cout << sumLine(M, n) << endl;
    }
    
    return 0;
}

