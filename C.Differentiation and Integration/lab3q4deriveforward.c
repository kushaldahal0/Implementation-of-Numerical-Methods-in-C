#include <stdio.h>
int fac(int n)
{
	if(n == 0) return 1;
	return n*fac(n-1);
}
int main(){
	
    float x[10],y[10],fd[10],h,fx,fy,p,s,sum;  
    int i,j,n,ch=30;  
    printf("How many terms you want to enter : ");  
    scanf("%d",&n);  
    
    printf("\nEnter the different values of x:\n");
    for (i=0;i<n;i++)
        scanf("%f", &x[i]);

    printf("\nThe corresponding values of y are:\n");
    for (i=0;i<n;i++)
        scanf("%f", &y[i]);


    for( i = 0; i<n;i++) fd[i] = y[i];
    for( i = 0; i<n;i++)
    	for(j = n-1 ; j >= i+1;j-- ) fd[j] = fd[j] - fd[j-1];

    printf("\nEnter the value of x for which you wants to find Y : ");  
    scanf("%f",&fx); 
    
    h= x[1]-x[0];
    s = (fx - x[0])/h;


    sum = fd[1] + fd[2]*(2*s-1)/fac(2) + fd[3]*(3*s*s-6*s+2)/fac(3) + fd[4]*(4*s*s*s-18*s*s+22*s-6)/fac(4);
    fy = sum/h;
    printf("f'(%.2f) = %.3f", fx, fy);
}
//1 1.2 1.4 1.6 1.8 2
//0 0.128 0.544 1.296 2.432 4
//1.1 ans = 0.65
