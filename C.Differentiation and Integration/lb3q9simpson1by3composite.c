#include <stdio.h>

int main(){
	int i,n;
 float sum =0,h =0 ,value = 0, x[20], y[20];
 printf("How many data points?\n");
 scanf("%d", &n);
// if(n%2 != 0){
// 	printf("n must be multiple of 2 for simpsons 1/3 composite");
// 	return(0);
// }
 printf("\nEnter the different values of x:\n");
 for (i=0;i<n;i++)
    scanf("%f", &x[i]);

 printf("\nThe corresponding values of y are:\n");
 for (i=0;i<n;i++)
    scanf("%f", &y[i]);
 h = (x[n-1] - x[0])/(n-1); 
 sum = y[0] + y[n-1];
 for (i=1;i<n-1;i++){
	if( i %2 != 0) sum += 4*y[i];
	else sum+= 2*y[i];
	}
 value = sum * h/3.0;
 printf("\n\nAns : %.3f",value);
}

// x=0	0.1	0.2	0.3	0.4
//y = 1	0.9975	0.99	0.9776	0.8604
