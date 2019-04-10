#include "calc.h"

int main(int argc, char *argv[])
{
  //char *p = new char[8];
  int m;
  calc j;
  
  m = j.add(&argv[1],&argv[2]);
  printf("result = %d\n",m);
  
  //pause();
  return m;
}
