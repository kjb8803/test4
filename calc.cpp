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
  return (x+y);
}

int main()
{
  char *p = new char[8];
  int i = 3, j;
  
  if(i == 3)
  {
    printf("print ok 7\n");
    j = add(2,2+i);
    printf("result = %d\n",j);
  }else
  {
    printf("print not ok 7");
    j = add(1,2);
    printf("result = %d\n",j);
  }
  
  pause();

  return 0;
}
