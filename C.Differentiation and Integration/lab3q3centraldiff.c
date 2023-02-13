#include<stdio.h>

#define f(x) x*x
int main(){
	float h, x, fxh, fhx, dy;
	printf("Enter the value of x to find derivative");
	scanf("%f",&x);
	printf("Enter the interval h");
	scanf("%f",&h);
	fxh = f(x+h);
	fhx = f(x-h);
	dy = (fxh-fhx)/(2*h); 
	printf("\nf'(x) = %f", dy);
}
