#include<stdio.h>
#include<conio.h>

int main() {
	int a;
	int b;
	int c;
	
	printf("input the length of the rectangle: ");
	scanf("%i",a);
	
	printf("input the width of the rectangle: ");
	scanf("%i",b);
	
	c=(a*b);
	
	printf("%f", c);
	
	getch();
}
