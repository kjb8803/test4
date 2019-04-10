#include <stdio.h>
#include <unistd.h>

class calc
{
  public:
  calc();
  ~calc();
  int add(int x, int y);
};

calc::calc(){}
calc::~calc(){}

int calc::add(int x, int y)
{
  printf("x : %d, y : %d, z : %d\n",x,y,x+y);
  return (x+y);
}
