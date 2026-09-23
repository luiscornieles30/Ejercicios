#include <iostream>
using namespace std;
// El siguente ejercicio contiene una estructura condicional.
int main() {
  int minutos= 0;
  int precioxminuto= 10;
  float IVA= 0; // Declaramos las variables que usaremos.
  cout << "Ingrese la cantidad de minutos que desea usar: ";
  cin >> minutos; // Pedimos al usuario que ingrese la cantidad de minutos que desea usar.
  if (cin.fail()) {
    cout << "Error: Por favor, ingrese un valor valido." << endl;
    return 1;
  } // En esta condición nos aseguramos de que coloque algun caracter tipo leta o simbolo, debido a que la unica manera de que falle la variable es que no se use como un numero.
  if (minutos <= 0) {
    cout << "Error: Por favor, ingrese un valor mayor a 0." << endl;
    return 1;
  } // En esta condición nos aseguramos de que el usuario ingrese un valor mayor a 0.       
  IVA = (minutos * precioxminuto) * 1.15 ; // En esta línea calculamos el precio total con IVA incluido.
  cout << "El precio total de la llamada con IVA incluido es: " << IVA << "bs" << endl;
  return 0;
}
