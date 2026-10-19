#include <iostream>

using namespace std;

int main () {

   /*
   FOR
   WHILE
   DO.WHILE
        1- somar desde o nº1 ao numero 10 (incluindo 1 e 10)
        2- subrtair do 11 ao 15, incluindo-os
        3- multiplicar/dividir 16 ao 20. par divide, impar multiplica

   */

   float resultado=0;
   int i;
   for (i=1; i<=10; i++){
        resultado += i;
   }
   i=11;
   do {
        resultado -= i;
        i++;
   } while (i<=15);

   while (i<=20) {

        if (((i/2)*2) == i) {
            resultado /=i;
        } else {
        resultado *= i;
        }
        i++;
    }
        cout << resultado;

    return 0;
}
