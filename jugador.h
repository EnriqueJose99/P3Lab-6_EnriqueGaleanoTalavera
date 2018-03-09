#include <iostream>
#include <string>

#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;
class Jugador{
private:
  string nombre;
  bool estadoVM;
  int tipoDeControlador;

public:
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
