/*Program to find Root of a fuction by using Fixed point method*/


#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX 100
#define E 0.0001
#define f(x) cos(x)-3*x+1
#define g(x) (cos(x)+1)/3


int main()
{
   int count=0;
   float x0,x1,error;
   printf("Enter the initial guess value of x0:\n");
   scanf("%f",&x0);
   begin:
   x1=g(x0);
   error=fabs(x1-x0);
   if(error<=E)
   {
   	  printf("The root is %f\n",x1);
      printf("The number of iteration is %d\n",count);
   }
   else
   {
   	    x0=x1;
   	    count ++;
     	if (count<MAX)
        goto begin;
    	else
     	printf("Solution does not converge.\n");

   }
   getch();
   return(0);
}
