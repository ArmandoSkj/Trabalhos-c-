#include <iostream>

using namespace std;

int main () {

    float dinheirohora, horasmes, salariomes, salarioano;

    cout << "Quanto ganha por hora: ";
    cin >> dinheirohora;
    cout << "Quantas horas trabalha por mes: ";
    cin >> horasmes;

    salariomes = dinheirohora*horasmes;
    salarioano = salariomes*12;

    cout << "Voce ganha em media " << salariomes << " por mes" << endl;
    cout << "Voce ganha em media " << salarioano << " por ano";


    return 0;

}
