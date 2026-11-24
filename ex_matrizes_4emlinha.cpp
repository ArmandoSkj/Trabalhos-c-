#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga=1; // 1-X -1º jogar // 2-O -2ºjogar !
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro(tabuleiro);

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostraTabuleiro(tabuleiro);
    mostraTabuleiro(tabuleiro);*/

    return 0;
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    for (int i=0; i<LINHAS; i++) {
        cout << "\n";
        cout << arr[i][i];
    }
    for (int j=0; j<COLUNAS; j++) {
            cout << arr[j][j];
        }


    /*cout << "\nLinha 1: Coluna 2: -"  << arr[0][1] << "-";
    arr[0][1] = "a";*/
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {
    for (int i=0; i<LINHAS; i++) {
        for (int j=0; j<COLUNAS; j++) {
            arr[i][j] = "| |";
        }
    }
}

int pedePecaJogador() {
    /*int col;
    cout << "Em que coluna queres jogar";
    cin >> col;*/
    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return true;
}
