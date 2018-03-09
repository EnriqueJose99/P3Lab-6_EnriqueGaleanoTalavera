#include <iostream>
#include <string>
#include "items.h"

#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;
class Jugador:public Items{
private:


public:
  string nombre;
  bool estadoVM;
  int tipoDeControlador;

  Jugador();
  Jugador(string, bool, int);

  void setNombre(string);
  string getNombre();

  void setEstadoVM(bool);
  bool getEstadoVM();

  void setTipoDeControlador(int);
  int getTipoDeControlador();

};
#endif
