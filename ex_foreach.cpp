#include <iostream>

using namespace std;

int main () {
    string meusNomes[] = {"Polnaref", "Jorge", "Lisa", "Antonieta"};
    for (string nome : meusNomes) {
        cout << nome << "\n";
    }
    return 0;
}