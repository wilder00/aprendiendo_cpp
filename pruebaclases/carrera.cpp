#include<iostream>
#include<string>
#include "carrera.h"
using namespace std;

Carrera::Carrera(string name){
  _name = name;
}

string Carrera::toString(){
  return "Carrera: " + _name;
}