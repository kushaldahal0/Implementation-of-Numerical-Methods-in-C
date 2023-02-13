//least square approximation 
// a. linear


#include<stdio.h>
#include<conio.h>

#define S 50

int main()
{
 int n, i;
 float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;
 /* Input */
 printf("How many data points?\n");
 scanf("%d", &n);
 printf("\nEnter the different values of x:\n");
 for (i=0;i<n;i++)
    scanf("%f", &x[i]);

 printf("\nThe corresponding values of y are:\n");
 for (i=0;i<n;i++)
    scanf("%f", &y[i]);
    
 /* Calculating Required Sum */
 for(i=1;i<=n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 /* Calculating a and b */
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 /* Displaying value of a and b */
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",a,b);
 return(0);
}
//x 0 2 5 7
//-1 5 12 20
//ans: -1.14 + 2.90x
