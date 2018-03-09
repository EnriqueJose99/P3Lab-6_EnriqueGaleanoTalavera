#ifndef BOMBAS_H
#define BOMBAS_H
#include <iostream>
#include <string>
#include "items.h"
using namespace std;

class Bombas:public Items{
private:
  int contador;

public:
  Bombas();
  Bombas(int);

  void setContador(int);
  int getContador();


};
#endif


int contador;
