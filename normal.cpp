#include "normal.h"
#include <iostream>
#include <string>
#include <cstdlib>

Normal::Normal(){

}

Normal::Normal(int alcanze){
  alcanze =  rand()% 4+1;
}

int Normal::getAlcanze(){
  return alcanze;
}
