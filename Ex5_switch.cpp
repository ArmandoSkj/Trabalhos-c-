#include <iostream>

using namespace std;

int main () {

    int opcao;

    cout << "1 - Somar \n";
    cout << "2 - Subtrair \n";
    cout << "0 - Sair \n";
    cout << "Opcao: \n";

    cin >> opcao;

    switch (opcao)
    {
        case 1:
            cout << "A";
            break;
        case 2:
            cout << "B";
            break;
        case 0:
            cout << "C";
            break;
        default:
            cout << "D";
            break;

    }

    return 0;
}
