#include <iostream>

using namespace std;
#define N 10

int main () {

    int arrayNumero[N] = {10, 8, -5, 6, 12, 4, -7, 14, 3, -3};
    int aux;

    for (int j=0; j<(N-1); j++) {
        for (int i = (j+1); i < N; i++) {
           if (arrayNumero[j] > arrayNumero[i]) {
                aux = arrayNumero [i];
                arrayNumero [i] = arrayNumero[j];
                arrayNumero [j] = aux;

           }
        }
    }

    cout << endl << "\n";

    for (int i = 0; i < N; i++) {
       cout << arrayNumero[i] << " ";
    }


    return 0;
}
