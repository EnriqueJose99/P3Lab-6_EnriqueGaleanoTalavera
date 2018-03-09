#ifndef NORMAL_H
#define NORMAL_H
#include "bombas.h"
#include <string>
using namespace std;

class Normal:public Bombas{
private:
  int alcanze;
public:
  Normal();
  Normal(int);
  int getAlcanze();
};
#endif
