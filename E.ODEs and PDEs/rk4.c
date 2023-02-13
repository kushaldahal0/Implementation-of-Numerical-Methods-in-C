
#include<stdio.h>
#include<conio.h>

#define f(x,y) 2*y/x

int main()
{
 float x,y,xn,h,m1,m2,m3,m4;
 int i, n;

 printf("Enter Initial Condition\n");
 printf("x0 = ");
 scanf("%f", &x);
 printf("y0 = ");
 scanf("%f", &y);
 printf("Enter calculation point xn = ");
 scanf("%f", &xn);
 printf("Enter number of steps: ");
 scanf("%d", &n);

 /* Calculating step size (h) */
 h = (xn-x)/n;
 printf("\nstep\tx\ty\n");
 for(i = 1; i<=n;i++){
 	m1 = f(x,y);
 	m2 = f(x+0.5*h,y+0.5*h*m1);
 	m3 = f(x+0.5*h,y+0.5*h*m2);
 	m4 = f(x+h,y+h);
 	x+=h;
 	y+=h*(m1+2*m2+2*m3+m4)/6;
 	printf("%d\t%.4f\t%.4f\n",i,x,y);
 }
}
