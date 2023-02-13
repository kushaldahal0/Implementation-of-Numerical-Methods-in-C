//newton's backward interpolation

 #include<stdio.h>  
 #include<conio.h>  
 #include<math.h>  
 int fac(int n);
 int main()  
 {  
    float x[10],y[10],bd[10],h,fx,fy,p,s;  
    int i,j,n,ch=30;  
    printf("How many terms you want to enter : ");  
    scanf("%d",&n);  
    
    printf("\nEnter the different values of x:\n");
    for (i=1;i<=n;i++)
        scanf("%f", &x[i]);

    printf("\nThe corresponding values of y are:\n");
    for (i=1;i<=n;i++)
        scanf("%f", &y[i]);
        
    printf("\nEnter the value of x for which you wants to find Y : ");  
    scanf("%f",&fx);
    
    for( i = 1; i<=n;i++){
	
	bd[i] = y[i];
    }
	for (i = n; i>=2 ;i--)
    	for(j = 1 ; j < i; j++) 
			bd[j] = bd[j+1] - bd[j];

 
    
    h= x[2]-x[1];
    s = (fx - x[n])/h;
    fy= bd[n];
    for (i = 1; i<n;i++){
    	p = 1;
    	for (j = 1;j<=i;j++){
    		p *= (s+j-1);
		}
		fy += (bd[n-i]*p)/fac(i);
	}
	printf("\n Y(%f)=%.3f",fx,fy);
}


int fac(int n)
{
	if(n == 0) return 1;
	return n*fac(n-1);
}
//1891 1901 1911 1921 1931
//
//The corresponding values of y are:
//46 66 81 93 101

//x = 1925
//fy == 96.8368
