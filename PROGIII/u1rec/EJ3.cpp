#include <iostream>
using namespace std;

// Función recursiva para invertir el número
int invertirNumero(int num, int invertido = 0) {
    // Caso base: cuando el número es 0
    if (num == 0) {
        return invertido;
    }
    // Recursión: agregar el último dígito de num a invertido y llamar a la función con el resto de num
    return invertirNumero(num / 10, invertido * 10 + num % 10);
}

void invertirYMostrarNumero(int num) {
    // Mostrar el número original
    cout << "Número original: " << num << endl;

    // Verificar si el número es negativo
    if (num < 0) {
        cout << "Error: no se permiten números negativos." << endl;
        return;
    }

    // Llamar a la función recursiva para invertir el número
    int numeroInvertido = invertirNumero(num);

    // Mostrar el número invertido
    cout << "Número invertido: " << numeroInvertido << endl;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Llamar a la función para invertir y mostrar el número
    invertirYMostrarNumero(numero);

    return 0;
}
