//sumar dos numeros enteros
#include<iostream>
using namespace std;

int main(){
    //declarando variables
    int sumando1;
    int sumando2;
    int suma;

    //obtenr input de la persona
    cout<<"Escriba el primer número entero: ";
    cin>>sumando1;

    cout << "Ahora escriba el segundo número entero: ";
    cin >> sumando2;

    suma = sumando1 + sumando2;
    cout << "la suma es: " << suma << endl;

    return 0;
}