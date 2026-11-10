#include <iostream>

using namespace std;
#define N 10

int main () {

    int arrayNumero[N] = {0, 12, 5, 6, 2, 11, 7, 4, 0, 3};
    int aux;

    for (int j=0; j<(N-1); j++) {
        for (int i = (j+1); i < N; i++) {
           if (arrayNumero[j] < arrayNumero[i]) {
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
