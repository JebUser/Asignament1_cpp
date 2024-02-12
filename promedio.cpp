#include <iostream>

int main() {
    int numCalificaciones;

    std::cout << "Ingrese el numero de calificaciones: ";
    std::cin >> numCalificaciones;

    if (numCalificaciones <= 0) {
        std::cerr << "Por favor, ingrese un numero valido de calificaciones." << std::endl;
        return 1;
    }

    double sumaCalificaciones = 0.0;
    double calificacion;

    for (int i = 1; i <= numCalificaciones; ++i) {
        std::cout << "Ingrese la calificacion " << i << ": ";
        std::cin >> calificacion;

        if (calificacion < 0 || calificacion > 5) {
            std::cerr << "Por favor, ingrese una calificacion valida (entre 0 y 5)." << std::endl;
            return 1;
        }

        sumaCalificaciones += calificacion;
    }

    double promedio = sumaCalificaciones / numCalificaciones;

    std::cout << "El promedio es: " << promedio << std::endl;
    system("pause");

    return 0;
}
