#include <stdio.h>
#include <sqrt.h>

int main(){

	double a, b, c;
	
	printf("\nEnter side A: ");
	scanf("%lf", &a);

	printf("\nEnter side B: ");
	scanf("%lf", &b);

	c = sqrt(a*a + b*b);
	printf("Side C: %lf", c);
}