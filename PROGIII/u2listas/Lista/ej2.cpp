/*Implementar una función que recibe una lista de números enteros y un número entero “n” y
que modifique la lista borrando todos los elementos de la lista que tengan el número “n”.
Imprimir la lista antes de hacer el llamado a la función y luego del llamado a la función para
mostrar que la lista original cambió. ej: lista: 1->2->3->4->5->3->7->8->3->10 con n=3 debe
pasar con la función a 1->2->4->5->7->8.*/
#include <iostream>
#include "Lista.h"

using namespace std;



using namespace std;

void eliminarElemento(Lista<int>& lista, int n) {
    for (int i = 0; i < lista.getTamanio(); i++) {
        if (lista.getDato(i) == n) {
            lista.remover(i);  
            i--;  
        }
    }
}

int main() {
    Lista<int> Lista;
    int t, d, n;

    cout << "Ingrese el tamaño de la Lista: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        cout << "Ingrese el valor de la lista en la posicion: " << i << endl;
        cin >> d;
        Lista.insertarUltimo(d);
    }

    cout << "Lista original: ";
    Lista.print();

    cout << "Ingrese el numero a eliminar de la Lista: " << endl;
    cin >> n;

    eliminarElemento(Lista, n);

    cout << "Lista despues de eliminar al numero " << n << ": ";
    Lista.print();

    return 0;
}
