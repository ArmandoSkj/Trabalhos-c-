#include <iostream>

using namespace std;


int main () {

    int quantidadeNumeros, numero;
    int soma = 0;

    cout << "Quantos numeros vai querer somar?: ";
    cin >> quantidadeNumeros;

    for (int i = 0; i < quantidadeNumeros; i++) {

        cout << "Diga os numero que deseja somar: ";
        cin >> numero;
        soma += numero;

    }

    cout << "O resultado da soma de seu numeros e: " << soma;

    return 0;
}
