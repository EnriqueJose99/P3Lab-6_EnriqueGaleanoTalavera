#include "jugador.h"
#include <iostream>
#include <string>
using namespace std;


Jugador::Jugador(){

}

Jugador::Jugador(string pNombre, bool pEstadoVM, int pTipoDeControlador){
  nombre = pNombre;
  estadoVM = pEstadoVM;
  tipoDeControlador = pTipoDeControlador;
}
