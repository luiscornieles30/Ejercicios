#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
// El siguente ejercicio contiene una estructura secuencial.
int main()
 {
    float carro= 0; float impuesto= 0; float ganancia=0; float precioreal=0; 
    std::string modelo;
    srand(time(0)); // Generamos la semilla con la que trabajará nuestra libreria y pueda dar numeros aleatorios con el tiempo de ejecución real del programa.
    

    cout << "Ingrese el modelo de carro que desea comprar: " << endl;
    cin >> modelo;
    carro = 100 + rand() % (2000 - 100 + 1); // Generamos un rango de precio aleatorio para que cada ves que se ejecute el programa el precio del carro sea diferente.
    impuesto = carro * 0.06; // Calculamos el impuesto.
    ganancia = carro * 0.12; // Calculamos la ganancia.
    precioreal = (impuesto + ganancia);
    precioreal = carro + precioreal; // Calculamos el precio real del carro.
    cout << "El precio del carro modelo " << modelo << " es: " << carro << "bs" << endl;
    cout << "El coste final del vehículo " << modelo << " es: " << precioreal << "bs" << endl;
    return 0;
}
