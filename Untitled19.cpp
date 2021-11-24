#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	
	printf("input the radius of the circle",&a);
	scanf("%f",a);
	
	a=3.142*(a*a);
	printf("%f",&a);
	return 0;
}
