#include<stdio.h>
#include<conio.h>

int main() {
	int a;
	int b;
	int c;
	printf("input the length of the rectangle",&a);
	scanf("%i %d",a);
	
	printf("input the width of the rectangle",&b);
	scanf("%i %d ",b);
	
	c=a*b;
	printf("%f ",c); 
	return 0;
}
