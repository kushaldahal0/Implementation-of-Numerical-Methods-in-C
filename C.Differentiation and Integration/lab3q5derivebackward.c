#include <stdio.h>
int fac(int n)
{
	if(n == 0) return 1;
	return n*fac(n-1);
}
int main(){
	
    float x[10],y[10],bd[10],h,fx,fy,p,s,sum;  
    int i,j,n,ch=30;  
    printf("How many terms you want to enter : ");  
    scanf("%d",&n);  
    
    printf("\nEnter the different values of x:\n");
    for (i=1;i<=n;i++)
        scanf("%f", &x[i]);

    printf("\nThe corresponding values of y are:\n");
    for (i=1;i<=n;i++)
        scanf("%f", &y[i]);


    for(i=1;i<=n;i++) bd[i] = y[i];


    printf("\nEnter the value of x for which you wants to find Y : ");  
    scanf("%f",&fx); 
    
    for (i = n; i>=2 ;i--)
    	for(j = 1 ; j < i; j++) 
			bd[j] = bd[j+1] - bd[j];

 
    
    h= x[2]-x[1];
    s = (fx - x[n])/h;


    sum = bd[1] + bd[2]*(2*s+1)/fac(2) + bd[3]*(3*s*s+6*s+2)/fac(3) + bd[4]*(4*s*s*s+18*s*s+22*s+6)/fac(4);
    fy = sum/h;
    printf("f'(%.2f) = %.3f", fx, fy);
}
//5 6 7 8 9
//10 14.5 19.5 22.5 32
// 9 ans = 18.333

