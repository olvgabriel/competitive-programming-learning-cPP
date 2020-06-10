#include <iostream>

using namespace std;

int main() {
    double raio;

    cin >> raio;


    cout.precision(2);
    cout.setf(ios::fixed);

    cout << raio*raio*3.14159 << endl;

    return 0;
}