#include <iostream>
#include <string>
// El siguente ejercicio contiene una estructura repetitiva.
int main() {
    float sueldobase= 100.07; float sueldototal=0;
    int ventas= 0; int comision=0;
    std::string respuesta; //Establecemos las variables que usaremos en el programa.
    
    do
    {
       std::cout << "Ingrese la cantidad de ventas realizadas: ";
       std::cin >> ventas;
       if (std::cin.fail()) {
        std::cout << "Error: Por favor, ingrese un valor valido." << std::endl;
        return 1;
       }
       if (ventas < 0) {
        std::cout << "Error: Por favor, ingrese un valor mayor o igual a 0." << std::endl;
        return 1; //En estas dos condiciones nos aseguramos de que el usuario ingrese un valor valido y mayor o igual a 0.
       }    
       comision = ventas * 1.10; // Calculamos la comision.
       sueldototal = sueldobase + comision; // Calculamos el sueldo total.
       if (comision > 100000) {
        comision = comision + 100;
       }
       std::cout << "Felicidades, usted ha realizado " << ventas << " ventas en nuestra empresa, gracias por su apoyo constante y disciplina." << std::endl;
       std::cout << "El dinero que obtuvo por comision es: " << comision << "bs" << std::endl;
       std::cout << "El sueldo total obtenido incluyendo comision y su respectivo sueldo es: " << sueldototal << "bs" << std::endl;
       while (true) { //Aquí nos aseguramos el funcionamiento de la pregunta final, debido a que si el usuario coloca "dsad" el programa se cerraría abruptamente, con esto nos aseguramos de que la pregunta siga teniendo sentido.
        std::cout << "¿Desea registrar otro empleado? (Si/No):";
        std::cin >> respuesta;
        if (respuesta != "Si" && respuesta != "si" && respuesta != "SI" && respuesta != "sI" && respuesta != "No" && respuesta != "no" && respuesta != "NO" && respuesta != "nO") {
            std::cout << "Error: Por favor, ingrese un valor valido." << std::endl;
            continue;
        }
        else {
            break;
        }
       }

    } while (respuesta == "Si" || respuesta == "si" || respuesta == "SI" || respuesta == "sI");
        if (respuesta == "No" || respuesta == "no" || respuesta == "NO" || respuesta == "nO") {
            std::cout << "Gracias por usar nuestro programa, vuelva pronto." << std::endl;
            return 1;
        }
    return 0;
}