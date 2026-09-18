#include <iostream>
// El siguente ejercicio contiene una estructura condicional.
int main() {
  int minutos= 0;
  int precioxminuto= 10;
  float IVA= 0; // Declaramos las variables que usaremos.
  std::cout << "Ingrese la cantidad de minutos que desea usar: ";
  std::cin >> minutos; // Pedimos al usuario que ingrese la cantidad de minutos que desea usar.
  if (std::cin.fail()) {
    std::cout << "Error: Por favor, ingrese un valor valido." << std::endl;
    return 1;
  } // En esta condición nos aseguramos de que coloque algun caracter tipo leta o simbolo, debido a que la unica manera de que falle la variable es que no se use como un numero.
  if (minutos <= 0) {
    std::cout << "Error: Por favor, ingrese un valor mayor a 0." << std::endl;
    return 1;
  } // En esta condición nos aseguramos de que el usuario ingrese un valor mayor a 0.       
  IVA = (minutos * precioxminuto) * 1.15 ; // En esta línea calculamos el precio total con IVA incluido.
  std::cout << "El precio total de la llamada con IVA incluido es: " << IVA << "bs" << std::endl;
  return 0;
}