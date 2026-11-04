#include <iostream>

using namespace std;
#define N 13

int main () {

    float multiplicacao = 1;
    float arrayNum[N] = {4, -11, 3.3, -0.1, 1.42, 5.3, 12, 0.4, -1.02, 9, -3.4, 0.5, -2.09};


    for (int i=0; i<N; i++) {
       multiplicacao *= arrayNum[i];
    }
    cout << "O resultado final = " << multiplicacao;

    return 0;
}
