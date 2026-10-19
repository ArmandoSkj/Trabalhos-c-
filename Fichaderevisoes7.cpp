#include <iostream>

using namespace std;

int main () {

    float x, y, z, resultadox, resultadoy, resultadoz;

    cout << "Diz me um numero inteiro: ";
    cin >> x;
    cout << "Diz me um segundo numero inteiro: ";
    cin >> y;
    cout << "Diz me um numero real: ";
    cin >> z;

    resultadox =  y*2 * x/2;
    resultadoy = 3*z + x;
    resultadoz =  z*z*z;

    cout << resultadox << endl;
    cout << resultadoy << endl;
    cout << resultadoz << endl;

    return 0;

}
