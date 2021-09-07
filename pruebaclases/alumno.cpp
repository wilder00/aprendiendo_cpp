#include "alumno.h"
#include<string>
#include<iostream>
using namespace std;

Alumno::Alumno(int age, string name){
  Alumno::age = age;
  Alumno::name = name;
};
string Alumno::toString(){
  return "edad: "+ to_string(Alumno::age) + "\n Nombre: " + Alumno::name;
};