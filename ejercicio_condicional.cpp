#include <iostream>
// El siguente ejercicio contiene una estructura condicional.
int main() {
  int minutos= 0;
  int precioxminuto= 0;
  float IVA= 0; // Declaramos las variables que usaremos, y aprovechamos de establecerlas en 0 para evitar basuras de memoria.
  std::cout << "Ingrese la cantidad de minutos que desea usar: ";
  std::cin >> minutos; // Pedimos al usuario que ingrese la cantidad de minutos que desea usar.
  if (std::cin.fail()) {
    std::cout << "Error: Por favor, ingrese un valor valido." << std::endl;
  }

    return 0;
}