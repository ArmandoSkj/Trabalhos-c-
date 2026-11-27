#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> myvector;
    int soma (0);
    myvector.push_back (100);
    myvector.push_back (200);
    myvector.push_back (300);
    while (!myvector.empty() ) {
        soma += myvector.back();
        myvector.pop_back();
        //myvector.push_back (50);
    }
    cout << "A soma = " << soma << '\n';
    return 0;
}