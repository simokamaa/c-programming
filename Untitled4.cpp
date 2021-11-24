#include<stdio.h>

#include<conio.h>

main() {
	int radius;
	
	printf("please input the radius of the circle:");
	
	scanf("%i", &radius);
	
	double area = 3.14*(radius*radius);
	
	printf(" the area of the circle with %i,radius,is%f\n", area);
	
}
