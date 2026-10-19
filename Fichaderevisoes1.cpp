#include <iostream>

using namespace std;

int main () {

    string mensagem = "";
    string nome, genero, localidade,ida;
    int idade;

    cout << "Qual o teu nome: " << endl;
    cin >> nome;
    cout << "Qual a tua idade: " << endl;
    cin >> idade;
    cout << "Qual a tua localidade: " << endl;
    cin >> localidade;
    cout << "Qual o teu genero (Use F ou M): " << endl;
    cin >> genero;

    if (genero == "M") {
        mensagem = "Caro Sr. ";
    } else if (genero == "F") {
        mensagem = "Cara Sra. ";
    }

    mensagem = mensagem + nome;

    if (idade >= 18) {
        ida = " maior de idade ";
    } else {
        ida = " menor de idade ";
    }

    mensagem = mensagem + ida;
    mensagem = mensagem + "e mora em ";
    mensagem = mensagem + localidade;

    cout << mensagem;

    return 0;

}
