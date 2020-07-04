#include<stdio.h>
int main()
{
  union tyepun
  {
     int intval;
    char chrval[2];
  };
  union values val;
  val.chrval[0]='A',val.chrval[1]='B';
  printf("%c %c %d\n",val.chrval[0],val.chrval[1],val.intval);
  char c[2]={'C','D'};
  int *y=(int *)&c;
  printf("%c %c %d\n",c[0],c[1],*y);
}
