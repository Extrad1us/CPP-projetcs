// elaborar un programa que haga las cuatro operaciones basicas de matematicas
// dependiendo de los 2 valores que ingrese el usuario

#include <iostream>

using namespace std;

int main(){
    int n1, n2, suma=0, resta=0, multiplicacion=0, division=0;
    cout << "Ingres un valor numerico" ; cin >> n1 ;
    cout << "Ingrese un segundo valor numerico para operarlo con el primero" ; cin >> n2 ;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout<< "\nEl resultado de la suma es : " <<suma<< endl ;
    cout<< "\nEl resultado de la resta es : " <<resta<< endl ;
    cout<< "\nEl resultado de la multiplicacion es : " <<multiplicacion<< endl ;
    cout<< "\nEl resultado de la division es : " <<division<< endl ;


    return 0;
}

