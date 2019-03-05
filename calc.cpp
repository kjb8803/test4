#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace std;

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
  return (x+y);
}

/*int main()
{
  char *p = new char[8];
  int i = 3,k;
  calc j;
  
  if(i == 3)
  {
    printf("print ok 7\n");
    k = j.add(2,2+i);
    printf("result = %d\n",k);
  }else
  {
    printf("print not ok 7");
    k = j.add(1,2);
    printf("result = %d\n",k);
  }
  
  pause();

  return 0;
}*/
