#include "alumno.h"
#include "carrera.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]){
  string temp;
  Alumno al(15,"pedro");
  Carrera ing("Ing se sistemas");
  system("clear");
  cout << al.toString()<< endl;
  cin >> temp;
  cout << ing.toString()<< flush;
  system("clear");
  cout<< temp;
  cout<< "Good-Bye"<<endl;
  if(argc){
    cout<< "entrada: " << to_string(argc) << "  "<< argv[0] << "  " << argv[1] <<endl;
  }
  return 0;
}