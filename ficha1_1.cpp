#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Diz me um numero \n";
    cin >> n;
       if (n < 0){
            cout  << "Numero negativo";
       } else if (n == 0) {
        cout << "numero neutro";
       } else if (n > 0 && n <100){
        cout << "numero positivo pequeno";
       } else {
        cout << "Numero enorme";
       }

       return 0
}
