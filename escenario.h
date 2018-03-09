#ifndef ESCENARIO_H
#define ESCENARIO_H
#include "items.h"
#include "bombas.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Escenario{
private:
  //int size = 11;
  //int size1 = 13;
  string nombre;
  //Items*** matrix = new Items [11][13];
  vector<Bombas*> bombas;



};
#endif
