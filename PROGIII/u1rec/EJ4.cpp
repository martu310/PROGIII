/*Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.*/

#include <iostream>
using namespace std;

// Función recursiva dinámica para encontrar el mayor elemento en el arreglo
int encontrarMaximo(int arr[], int n) {
    // Caso base: Si hay un solo elemento, ese es el mayor
    if (n == 1) {
        return arr[0];
    }

    // Llamada recursiva para encontrar el máximo en el subarreglo
    int maxEnResto = encontrarMaximo(arr + 1, n - 1);

    // Retornar el mayor entre el primer elemento y el máximo del subarreglo
    return (arr[0] > maxEnResto) ? arr[0] : maxEnResto;
}

int main() {
    int n;

    // Solicitar el tamaño del arreglo
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    // Crear el arreglo
    int arr[n];

    // Solicitar los elementos del arreglo
    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Encontrar el mayor elemento usando la función recursiva
    int maximo = encontrarMaximo(arr, n);

    // Mostrar el mayor elemento
    cout << "El mayor elemento es: " << maximo << endl;

    return 0;
}

