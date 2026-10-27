#include <iostream>
using namespace std;

int opcao, ano;

void menu (){
    cout << "\nDiga a operacao que dezeja fazer\n";
    cout << "\n1- Dar o ano";
    cout << "\n2- Sair do programa\n";
    cout << "\nResposta: ";
    cin >> opcao;
}

int getYear (){
    return 2026;
}

int main () {

    ano = getYear();

    do {
      menu();
      switch (opcao) {
        case 1:
            cout << getYear();
            break;
        case 2:
            cout << "Adeus";
            break;
        default:
            break;
        }
   }while (opcao!=2);

   return 0;
}
