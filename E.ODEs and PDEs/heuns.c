
#include<stdio.h>
#include<conio.h>

#define f(x,y) 2*y/x

int main()
{
 float x,y,xn,h,m1,m2;
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

 /* Heun's Method */
 printf("\nsteps\tx\ty\n");
 for(i=0; i < n; i++)
 {
  m1 = f(x, y);
  m2 = f(x+h,y+m1*h);
  x +=h;
  y+=0.5*(m1+m2);
 
  printf("%d\t%.4f\t%0.4f\n",i,x,y);
 }

 /* Displaying result */
 printf("\nValue of y at x = %0.2f is %0.3f",x, y);

 getch();
 return 0;
}

