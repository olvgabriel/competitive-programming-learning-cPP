#include <iostream>

using namespace std;

int main() {
    int n, a;
    int acessos = 0;
    int dias = 0;
    int diax = 0;

    cin >> n;

    while (dias < n) {
        cin >> a;
        acessos += a;
        dias++;
        if (acessos >= 1000000 && diax == 0) {
            diax = dias;
        }
    }

    cout << diax << endl;






    return 0;
}