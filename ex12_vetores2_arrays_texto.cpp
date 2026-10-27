#include <iostream>
#include <string.h>

using namespace std;

char nome[31];

int main () {

    printf("Nome: ");
    cin.getline(nome, 31);
    printf("Ola, %s!\n", nome);

    printf("\nOla, %c!\n", nome [0]);
    cout << "\nOla, " <<  nome [0] << "!\n";

    return 0;
}
