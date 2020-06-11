#include <iostream>

using namespace std;

int main() {
    double n1, n2, average;

    cin >> n1 >> n2;

    int a = (n1+n2)/2;

    if (a >= 7) {
        cout << "Aprovado\n";
    } else if (a >= 4) {
        cout << "Recuperacao\n";
    } else {
        cout << "Reprovado\n";
    }






    return 0;
}