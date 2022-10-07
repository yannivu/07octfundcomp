// rectmain.c
#include <stdio.h>

// function prototypes go here ...
#include "func.h"

int main()
{
  float len, wid;
  float perim, area;

  printf("enter the rectangle's length and width: ");
  scanf("%f %f", &len, &wid);

  perim = find_perim(len, wid);  // call the find_perim function
  area = find_area(len, wid);    // call the find_area function

  display(perim, area);          // call the display function

  return 0;
}
