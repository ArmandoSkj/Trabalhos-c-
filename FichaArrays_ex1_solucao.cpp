#include <iostream>

using namespace std;
#define N 10

int main () {

    int soma = 0;
    int arrayNum[N];

    for (int i=0; i<N; i++) {
        cout << "\nDiga o num# " << i+1 << ": ";
        cin >> arrayNum[i];
    }

    cout << "\n \nA conta : 0"<< soma;
    for (int i=0; i<N; i++) {
       soma += arrayNum[i] * arrayNum[i];
       cout << " + (" << arrayNum[i];
       cout << " x " << arrayNum[i] << ") ";
    }
    cout << "\n\nO resultado final = " << soma;

    return 0;
}
