#include <iostream>

using namespace std;

int main() {
    int n, l, c;
    int i = 1;
    int cont = 0;
    
    cin >> n;

    while (i <= n) {
        cin >> l >> c;
        if (l > c) {
            cont += c;
        }
        i++;
    }
    
    cout << cont << endl;




    return 0;
}