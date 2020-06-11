#include <iostream>

using namespace std;

// comentário

/*
comentário
*/

int main() {

    int alunos, monitores;

    cin >> alunos;
    cin >> monitores;

    int numTotal = alunos + monitores;

    if (numTotal <= 50) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }

    return 0;
}