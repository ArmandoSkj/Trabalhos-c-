#include <iostream>

using namespace std;

int main () {

    int expoente, base;
    int resultado=1;

    cout << "Indica um numero para base" <<endl;
    cin >> base;
    cout << "Indica um numero para expoente" <<endl;
    cin >> expoente;

    while (expoente>0) {
        resultado = resultado * base;
        expoente--;
    }

    cout << "Resultado: " << resultado;

    return 0;
}
