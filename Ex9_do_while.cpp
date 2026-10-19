#include <iostream>

using namespace std;

int main(){

    int x;
    do {
        cout << "Digite um numero entre 1 e 3 \n";
        cout << "0 (Sair do Programa)\n";
        cout << "A sua opcao: \n";
        cin >> x;

        switch (x) {
            case 0:
                break;
            case 1:
                cout << "Bom programador \n";
                break;
            case 2:
                cout << "Muito bom programador \n";
                break;
            case 3:
                cout << "Excelente programador \n";
                break;
            default:
                cout << "Nao sei do que estas a falar \n";
                break;
        }

    } while (x!=0);

    return 0;
}
