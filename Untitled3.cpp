#include <stdio.h>
#include <conio.h>

 main() {
	int radius;		//distance between the center of the circle and circumfrence point of it
	printf("please input the radius of the circle: ");
	
	scanf("%i", &radius);
	

	double area=3.14 *(radius * radius);
	
	printf("the area of a cicle with %i radius is %f\n", area);
	
	return 0;
}
