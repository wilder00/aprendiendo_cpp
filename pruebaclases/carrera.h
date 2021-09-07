#include<string>
#ifndef CARRERA_H
#define CARRERA_H

class Carrera{
  private:
    std::string _name;
  public:
    Carrera(std::string name);
    
    std::string toString();

};

#endif //