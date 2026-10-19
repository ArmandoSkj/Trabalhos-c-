#include <iostream>

using namespace std;

int main () {

    float peso, ag, massa;

    cout << "Qual o peso do corpo: " << endl;
    cin >> peso;
    cout << "Qual o valor da aceleracao da gravidade: " << endl;
    cin >> ag;
    cout << "a massa do corpo e: ";

    massa = peso/ag;
    cout << massa;

    return 0;

}
