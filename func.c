// rectangle2.c
#include <stdio.h>

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
