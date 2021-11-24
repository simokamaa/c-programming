#include<stdio.h>


int length;
int width;
int results;

int main() {

printf("input the length of rectangle in feet\n: ");
scanf("%i %d\n", &length);


printf("input the width of the rectangle in feet\n: ");
scanf("%i %d\n",&width);


double area;
area=length*width;
results=area;

printf("results = %f\n",results);

return 0;
}
