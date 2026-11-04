#include <iostream>

using namespace std;

#define NLETRAS 10

int numTentativas =5;

// só maiusculas,max 10 caracteres
// 5 tentativas
void mostrarGrelha (char pl [NLETRAS]) {
    cout << "\n";
    for (int i=0; i<NLETRAS; i++) {
        if (pl[i] != ' ') {
            cout << "_" << " ";
        }
    }
}

int main () {

    bool ganhou = false;
    char letra;
    //string palavra = "CASA";
    char palavra[NLETRAS] = {'C','A','S','A',' ',' ',' ',' ',' ',' '};

    while (numTentativas > 0){
        mostrarGrelha(palavra);

        cout << "\nRestam " << numTentativas << " tentativas";
        cout << "\nDiga a Letra que queres verificar :";
        cin >> letra;
        numTentativas--;
    }

    cout << "\n\n----------------------------------";
    if (ganhou) {
        cout << "\nParabens .. ganhaste!";
    } else {
        cout << "\n\n Es um nabo a portugues. Perdeste!";
    }

    return 0;
}
