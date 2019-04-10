#include "calc.h"

int main(int argc, char *argv[])
{
  //char *p = new char[8];
  int m;
  calc j;
  
  m = j.add(argv[0],argv[1]);
  printf("result = %d\n",m);
  
  //pause();
  return m;
}
