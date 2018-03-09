#include "bombas.h"
#include <iostream>

Bombas::Bombas(){

}

Bombas::Bombas(int pContador){
  contador = pContador;
}

void Bombas::setContador(int pContador){
  contador = pContador;
}

int Bombas::getContador(){
  return contador;
}
