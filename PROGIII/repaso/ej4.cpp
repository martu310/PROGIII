/* Crear un programa con un menú de opciones visible por terminal, que tenga los
métodos sumarEnteros, calcularAreaCirculo y calcular la potencia de un número. El
menú deberá solicitar los parámetros al usuario de acuerdo a la opción
seleccionada.*/
#include <iostream>
#include <cmath>
using namespace std;


int sumarEnteros (int a, int b){
    return a+b;
}

double calcularAreaCirculo(double radio){
    const double PI= 3.1416;
    return PI*radio*radio;
}

double calcularPotencia (double base, int exponente){
    return pow (base,exponente);
}



void menu (){
int opcion;
do {
    cout << "Menu de opciones:\n";
    cout << "1.Sumar enteros\n";
    cout << "2.Calcular área del círculo\n";
    cout << "3.Calcular potencia\n";
    cout << "4.Salir\n";
    cout << "Seleccione la opcion deseada (1-4)";
    cin >> opcion;
}




}
int main (){


    return 0;
}