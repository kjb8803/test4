#include <stdio.h>
#include <unistd.h>

int main()
{
  char *p = new char[8];
  int i = 3;
  
  if(i == 3)
    printf("print ok\n");
  else
    printf("print not ok");
  
  pause();

  return 0;
}
