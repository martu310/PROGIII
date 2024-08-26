/*Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.
*/
#include <iostream>
using namespace std;

bool buscard (int n,int d){
    if (n==0){
        return false;
    }
    if (n %10==d){
        return true;
    }
    return buscard (n/10,d);
}


int main ()
{
int n;
int d;
cout << "Ingrese un número entero positivo";
cin >> n;
cout << "Ingrese un dígito";
cin >> d;
if (buscard(n,d))
{
cout << "Verdadero"<<endl;
} else{
    cout << "Falso"<< endl;
}

}