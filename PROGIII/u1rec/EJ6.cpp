#include <iostream>
using namespace std;

int contarParesEnPosicionesImpares(int n, int posicion) {
    if (n == 0) {
        return 0;
    }

    int digito = n % 10;
    bool esPosicionImpar = (posicion % 2 != 0);
    int cuenta = (esPosicionImpar && digito % 2 == 0) ? 1 : 0;

    return cuenta + contarParesEnPosicionesImpares(n / 10, posicion + 1);
}

int main() {
    int n;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    int resultado = contarParesEnPosicionesImpares(n, 1);
    cout << "Cantidad de dígitos pares en posiciones impares: " << resultado << endl;

    return 0;
}
