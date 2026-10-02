#include <iostream>

using namespace std;

int main(){
    float n1,n2;
    string operacao;
    float calculo;

    cout <<"Operacoes possiveis \n";
    cout << "somar \n";
    cout << "subtrair \n";
    cout << "multiplicar \n";
    cout << "dividir \n";

    cout <<"Diga qual operacao quer efetuar: ";
    cin >> operacao;

    //cout <<"Escolheste: " << operacao;

    cout  << "Diz o 1.num: ";
    cin >> n1;
    cout  << "Diz o 2.num: ";
    cin >> n2;

    if (operacao == "somar") {
        cout << "Soma = " << (n1 + n2);

    } else if (operacao == "subtrair") {
        cout << "Subtracao = " << (n1 - n2);

    } else if (operacao == "multiplicar") {
        cout << "Multiplicacao = " << (n1 * n2);

    } else if (operacao == "dividir") {

        if (n2 == 0) {
            cout << "Impossivel de fazer o calculo";
            cout << "o n2 nao pode ser 0";
        } else {
            calculo = (n1) / (n2);
            cout << "Divisao = " << calculo;

        }
    } else {
        cout << "O que raios queres fazer !! ";

    }

}
