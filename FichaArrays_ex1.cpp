#include <iostream>

using namespace std;

int main () {

    int soma = 0;
    int n = 10;
    int numero [n];


    for (int i = 0; i < n; i++) {
        cout << "Diz me dez numeros para eu calcular a soma dos quadrados dos dez valores: ";
        cin >> numero[n];
        soma = soma + numero[n] * numero[n];
    }
    cout << "A soma de seus numeros ao quadrado e: "<< soma;

    return 0;
}
