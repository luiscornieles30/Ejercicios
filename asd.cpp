#include <iostream>
using namespace std;
int numero;
int main() { 
    cout << "Ingrese un numero: ";
    cin >> numero;
    int numero1 = numero % 2;
    if (numero1 == 0) {
        cout << "El numero es: " << numero1 << endl;
    }
    return 0;
}








