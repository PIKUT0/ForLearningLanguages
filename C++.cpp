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
int series(void)
{
  static int series_num = 0;
  if(series_num == 255){return(series_num);}
  else{series_num++;}
}
int main(void)
{
  A: do {
   series();
   b ++;
  }
  while(b != 255);
  printf("count called %d times", series);
  return 0;
}
