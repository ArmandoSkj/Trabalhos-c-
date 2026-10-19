#include <iostream>

using namespace std;

int main () {

    float c, f;

    cout << "Diz uma temperatura em graus Celsius e eu devolverei em Farenheit: ";
    cin >> c;

    f = ((c*9)/5) +32;

    cout << "Em graus Farenheit, o seu valor e " << f;
    return 0;

}
