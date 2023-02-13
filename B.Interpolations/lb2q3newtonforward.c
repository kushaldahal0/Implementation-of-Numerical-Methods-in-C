//newton's forward interpolation  
 #include<stdio.h>  
 #include<conio.h>  
 #include<math.h> 
int fac(int n); 
 int main()  
 {  
    float x[10],y[10],fd[10],h,fx,fy,p,s;  
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
    fy= fd[0];
    p = 1;
    for (i = 1; i<n;i++){
    	for (j = 1;j<=i;j++){
    		p *= (s-j+1);
		}
		fy += (fd[i]*p)/fac(i);
		p = 1;
	}
	printf("\n Y(%f)=%.3f",fx,fy);
}


int fac(int n)
{
	if(n == 0) return 1;
	return n*fac(n-1);
}
//values 
//0 1 2 3 4
//1 1.5 2.2 3.1 4.3
//x = 1.2
//fy == 1.630

