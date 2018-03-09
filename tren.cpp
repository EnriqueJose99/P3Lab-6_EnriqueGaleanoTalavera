#include "tren.h"
#include <iostrem>
#include <vector>
using namespace std;

Tren::Tren(){

}

Tren::Tren(int pVagonX, int pVagonY):Escenario(nombreEs){
  vagonX = pVagonX;
  vagonY = pVagonY;
}

int Tren::getVagonX(){
  return vagonX;
}

int Tren::getVagonY(){
  return vagonY;
}
