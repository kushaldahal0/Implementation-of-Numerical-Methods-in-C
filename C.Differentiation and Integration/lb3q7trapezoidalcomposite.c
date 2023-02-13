#include <stdio.h>

int main(){
	int i,n;
 float sum =0,h =0 ,value = 0, x[20], y[20];
 printf("How many data points?\n");
 scanf("%d", &n);
 printf("\nEnter the different values of x:\n");
 for (i=0;i<n;i++)
    scanf("%f", &x[i]);

 printf("\nThe corresponding values of y are:\n");
 for (i=0;i<n;i++)
    scanf("%f", &y[i]);
    
 h = (x[n-1] - x[0])/(n-1); 
 sum = y[0] + y[n-1];
 for (i=1;i<n-1;i++)
    sum += 2*y[i];
 value = sum * h/2.0;
 printf("\n\nAns : %.3f",value);
}

//x = -1 -0.5 0 0.5 1
//y = 0.36788 0.60653 1 1.6487 2.7183
