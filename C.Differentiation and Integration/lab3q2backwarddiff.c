#include<stdio.h>

#define f(x) x*x
int main(){
	float h, x, fxh, fx, dy;
	printf("Enter the value of x to find derivative");
	scanf("%f",&x);
	printf("Enter the interval h");
	scanf("%f",&h);
	fxh = f(x-h);
	fx = f(x);
	dy = (fx-fxh)/h; 
	printf("\nf'(x) = %f", dy);
}
