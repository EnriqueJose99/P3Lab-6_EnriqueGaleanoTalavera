#ifndef ESPINA_H
#define  ESPINA_H
#include "bombas.h"
using namespace std;

class Espina:public Bombas{
private:
  int cantidad;
public:
  Espina();
  Espina(int);
  int getCantidad();
};
#endif
