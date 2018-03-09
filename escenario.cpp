#include "escenario.h"
#include "bombas.h"
#include <iostream>
#include <string>

using namespace std;

Escenario::Escenario(){

}

Escenario::Escenario(string pNombreEs){
  nombreEs = pNombreEs;
}

void Escenario::setNombreEs(string pNombreEs){
  nombreEs = pNombreEs;
}
string Escenario::getNombreEs(){
  return nombreEs;
}

vector<Bombas*>Escenario::getBombas(){
  return bombas;
}
