// C Program to solve ODE by using Taylor's series method
#include<stdio.h>
#include<conio.h>
#include<math.h>

int fact(int n){
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}


int main(){
	float x,x0,yx0,yx,fdy,sdy,tdy;
	printf("Enter initial Values of x &y\n:");
	scanf("%f%f",&x0,yx0);

	printf("Enter x at which function to be evaluated\n");
	scanf("%f",&x);
	fdy=3*(x0)*(x0)+2*(yx0)*(yx0);
	sdy= 6(x0)+4*(yx0)*fdy;
	tdy= 6+4*yx0*sdy+4*fdy*fdy;
	yx= yx0+(x-x0)*fdy+(x-x0)*(x-x0)*sdy/fact(2)+(x-x0)*(x-x0)*(x-x0)*tdy/fact(3);

	printf("Function Value at x=%f is %f\n",x,yx);
	getch();
	return 0;
}

