#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;

    if (num > 0) {
        cout << "positivo\n";
    } else if (num < 0) {
        cout << "negativo\n";
    } else {
        cout << "nulo\n";
    }
    return 0;
}