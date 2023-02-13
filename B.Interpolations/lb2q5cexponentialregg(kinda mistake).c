//c.	Exponential regression.

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define S 50

int main()
{
 int n, i;
 float x[S], y[S], lny[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b, lna;
 /* Input */
 printf("How many data points?\n");
 scanf("%d", &n);
 printf("\nEnter the different values of x:\n");
 for (i=0;i<n;i++)
    scanf("%f", &x[i]);

 printf("\nThe corresponding values of y are:\n");
 for (i=0;i<n;i++){
    scanf("%f", &y[i]);
    lny[i] = log(y[i]);
}
 /* Calculating Required Sum */
 for(i=0;i<n;i++)
 {
  sumX  += x[i];
  sumX2 += x[i]*x[i];
  sumY += lny[i];
  sumXY  += x[i]*lny[i];
 }

 /* Calculating a and b */
 b = ((n * sumXY-sumX*sumY)*1.0)/((n*sumX2-sumX*sumX)*1.0);
 lna = ((sumY - b*sumX)*1.0)/(n*1.0);
 a = exp(lna)*1.0;
 /* Displaying value of a and b */
 printf("Values are: a=%f and b = %f",a,b);
 printf("\nEquation of best fit is: y =%4.3fe ^ %4.3fX",a,b);
 return(0);
}
//x = 1 2 3 4 5
//y = 1 9 50 300 1500

////x =4 8 12 16
////y = 6 9 12 17
//
////ams = 3.36 e ^0.085x
