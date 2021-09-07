#include<string>
#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno{
  private:
    int age;
    std::string name;

  public:
    Alumno(int age, std::string name);
    std::string toString();

};

#endif //