#include <stdio.h>
#include <curses.h>
#include <iostream>
//Static then register goes :D
int b = 0;

/*int count (int i)
{
  static int c = 0;

  if(i) return c;
  else c++;
  return 0;
}*/
int series(int b)
{
  static int c = 0;
  if(b == 255) return 255;
  else c ++;
  return 0;
}
int main(void)
{
  A: do {
   series(b);
   b++;
  }
  while(b != 255);
  printf("count called %d times", series(b));
  return 0;
}

