#include <iostream>

using namespace std;

int main(){

    int numero;

    for (int i=0; i<1; i=0) {
        cout << "Digite um numero entre 1 e 3 \n";
        cout << "0 (Sair do Programa)\n";
        cout << "A sua opcao: \n";
        cin >> numero;

        switch (numero) {
            case 0:
                break;
            case 1:
                cout << "bom programador";
                break;
            case 2:
                cout << "muito bom programador";
                break;
            case 3:
                cout << "excelente programador";
                break;
            default:
                cout << "Nao sei do que estas a falar";
        }
        if  (numero == 0) break;

    }

    return 0;
}
