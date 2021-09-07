/*
 Este es un programa mínimo en C++, lo único que hace es escribir una frase
 en la pantalla
*//*
#include <iostream> // permite al programa imprimir datos en la pantalla
 // la función main comienza la ejecución del programa
 int main() {
    std::cout << "Bienvenido a C++!\n"; // muestra un mensaje
    return 0; // indica que el programa terminó con éxito
 } // fin de la función main
 */

/*
operadores:
<<    "operador de inserción de flujo"
>>    "operador de extraccion de flujo"

*/



#include <iostream> // "directiva de preprocesador" 
using namespace std;//"espacio de nombres"  

int main() {
  // << "operador de inserción de flujo"
  cout << "Hello\a \tWorld!\n\a"; // me parece que sin el using namesoace std, se debe poner std::cout // cout es de C output existe cin y cerr
  cout << "camino\a\t medio\r\n";
  cout << "rayo \r \nde lu\rz\n";
  cout << "hola como estás";
  return 0;
}


/*
type of variables:
int : 
double
char
string
bool
*/

