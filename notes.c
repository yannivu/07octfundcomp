// rectangle2.c
#include <stdio.h>

/*

seperating prototypes, main, and functions into different files
  protype file is called the header (.h file)  -- refer to func.h
  main file is called the driver (.c file) -- refer to rectmain.c
  functions file = functions file (.c file)  -- refer to func.c

improper way to compile:
  gcc rectmain.c func.c
    dont need func.h because its included in rectmain.c

proper way to compile:
  do it seperately
    gcc -c rectmain.c
      the -c takes away the actual compilation and makes rectmain.o which is an object file
  do the same for func.c
    gcc -c func.c
      creates func.o
    now combine the two .o files:
      gcc rectmain.o func.o
       creates a.out

*/

// function prototypes go here ...
float find_perim(float, float);
float find_area(float, float);
void display(float, float);

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

// function definitions go here ...
float find_perim(float len, float wid)
{
	float perim;
	perim = 2*(len+wid);
	return perim;
}

float find_area(float len, float wid)
{
	float area;
	area = len*wid;
	return area;
}

void display(float perim, float area)
{
	printf("the perimeter is: %.2f\n", perim);
	printf("the area is: %.2f\n", area);
}
