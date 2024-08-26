/*Implementar una función que intercambie los elementos entre 2 listas de números enteros
que recibe como parámetros. Si los tamaños de las listas son distintos, igual debe cambiar los
datos y cambiarían los tamaños de cada lista. Ejemplo sea lista1= 15->1->8->35->40->25->12 y
lista2= 3->4->912->45->66 al ejecutar la función quedarían lista1= 3->4->912->45->66 y
lista2=15->1->8->35->40->25->12.*/
#include <iostream>
#include "Lista.h"

using namespace std;

void intercambiarListas(Lista<int>& lista1, Lista<int>& lista2) {
    Lista<int> aux1, aux2;

    // Copiar elementos de lista1 a aux1
    for (int i = 0; i < lista1.getTamanio(); i++) {
        aux1.insertarUltimo(lista1.getDato(i));
    }

    // Copiar elementos de lista2 a aux2
    for (int i = 0; i < lista2.getTamanio(); i++) {
        aux2.insertarUltimo(lista2.getDato(i));
    }

    // Vaciar las listas originales
    lista1.vaciar();
    lista2.vaciar();

    // Insertar los elementos de aux2 en lista1
    for (int i = 0; i < aux2.getTamanio(); i++) {
        lista1.insertarUltimo(aux2.getDato(i));
    }

    // Insertar los elementos de aux1 en lista2
    for (int i = 0; i < aux1.getTamanio(); i++) {
        lista2.insertarUltimo(aux1.getDato(i));
    }
}

void ingresarElementos(Lista<int>& lista, int cantidad) {
    int valor;
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el valor del elemento " << i + 1 << ": ";
        cin >> valor;
        lista.insertarUltimo(valor);
    }
}

int main() {
    Lista<int> lista1;
    Lista<int> lista2;
    int cantidad1, cantidad2;

    // Solicitar al usuario los elementos de la primera lista
    cout << "Ingrese la cantidad de elementos para la lista 1: ";
    cin >> cantidad1;
    ingresarElementos(lista1, cantidad1);

    // Solicitar al usuario los elementos de la segunda lista
    cout << "Ingrese la cantidad de elementos para la lista 2: ";
    cin >> cantidad2;
    ingresarElementos(lista2, cantidad2);

    // Mostrar las listas antes de intercambiar
    cout << "Lista 1 antes de intercambiar: ";
    lista1.print();

    cout << "Lista 2 antes de intercambiar: ";
    lista2.print();

    // Intercambiar los elementos de las listas
    intercambiarListas(lista1, lista2);

    // Mostrar las listas después de intercambiar
    cout << "Lista 1 después de intercambiar: ";
    lista1.print();

    cout << "Lista 2 después de intercambiar: ";
    lista2.print();

    return 0;
}
