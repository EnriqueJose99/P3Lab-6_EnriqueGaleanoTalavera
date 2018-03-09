#include "espina.h"
#include <iostream>

using namespace std;

Espina::Espina(){

}

Espina::Espina(int pCantidad){
  cantidad = pCantidad;
}

int Espina::getCantidad(){
  return cantidad;
}
