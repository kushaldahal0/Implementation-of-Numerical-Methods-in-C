//program to find Root of a fuction by using Newton-Raphson method

#include<stdio.h>
#include<conio.h>
#include<math.h>


#define MAX 10
#define EB 0.0001

#define f(x) x*x-3*x+2
#define fd(x) 2*x-3


int main()
{
   int count=0;
   float x0,x1,fx,fdx;
   printf("Enter the initial value of x0:\n");
   scanf("%f",&x0);
   begin:
   fx=f(x0);
   fdx=fd(x0);
   x1=x0-(fx/fdx);
   if(fabs((x1-x0)/x1)<=EB)
   {
   	    printf("Root=%f\n",x1);
        printf("No. of Iteration steps=%d\n",count);
   }
   else
   {
   	    x0=x1;
        count ++;
        if (count<MAX)
        goto begin;
        else
        printf("It takes many steps So solution does not converge.\n");  
    }
   getch();
   return(0);
}
