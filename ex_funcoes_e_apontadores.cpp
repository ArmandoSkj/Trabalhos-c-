#include <iostream>
#include <stdio.h>
using namespace std;

void mostraMsg();
void troca(int &x, int &y);

int main () {
    int a=5, b=3;

    mostraMsg();
    troca(a, b);

    cout << "\nA: " << a << "// B: " << b;
    return 0;
}

void mostraMsg(){
    cout << "Estou a mostrar a funcao mostraMsg\n";
}

void troca(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;

}
