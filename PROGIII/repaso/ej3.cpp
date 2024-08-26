#include <iostream>

using namespace std;

// Función que marca un asiento como reservado
void marcarAsiento(bool* asiento) {
    *asiento = true;
}

// Función para mostrar el estado de los asientos
void mostrarAsientos(const bool asientos[], int tamano) {
    for (int i = 0; i < tamano; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << endl;
    }
}

int main() {
    const int numAsientos = 10; // Número de asientos en el teatro
    bool asientos[numAsientos] = {false}; // Inicialmente todos los asientos están libres

    cout << "Estado inicial de los asientos:" << endl;
    mostrarAsientos(asientos, numAsientos);

    int numAsiento;
    cout << "\nElija un asiento para reservar (1-" << numAsientos << "): ";
    cin >> numAsiento;

    // Validar la entrada del usuario
    while (numAsiento < 1 || numAsiento > numAsientos) {
        cout << "Número de asiento inválido. Por favor, elija un asiento entre 1 y " << numAsientos << ": ";
        cin >> numAsiento;
    }

    // Reservar el asiento seleccionado
    marcarAsiento(&asientos[numAsiento - 1]);

    cout << "\nEstado de los asientos después de la reserva:" << endl;
    mostrarAsientos(asientos, numAsientos);

    return 0;
}
