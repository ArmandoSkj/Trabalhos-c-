#include <iostream>

using namespace std;

int main () {

    float c, f;

    cout << "Diz uma temperatura em graus Farenheit e eu devolverei em celsius: ";
    cin >> f;

    c = (5*(f-32)/9);

    cout << "Em graus celsius, o seu valor e  " << c;
    return 0;

}
