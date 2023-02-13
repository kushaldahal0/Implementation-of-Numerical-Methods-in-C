#include<stdio.h>
#include<conio.h>
#include<math.h>
int fac(int n)
{
	if(n == 0) return 1;
	return n*fac(n-1);
}
float newt(float fd[],float s,int n){
	  float p,res = fd[0];
	  int i,j;
      for (i = 1; i<n;i++){
    	p = 1;
    	for (j = 1;j<=i;j++){
    		p *= (s-j+1);
		}
		res += (fd[i]*p)/fac(i);
	  }
	return res;
}
void main()
{
    float x[10],y[10],fd[10],h,s1,s2,a,b,c,x1,x2,y1,y2,p,value;  
    int i,j,n;  
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
    	for(j = n-1 ; j >=i+1;j-- ) fd[j] = fd[j] - fd[j-1];
    	
    a = 0.5*fd[3];
    b = fd[2] - fd[3];
    c = fd[1] - fd[2]/2 + fd[3]/3;
    printf("a =%f b=%f c=%f\n",a,b,c);
    s1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    s2 = (-b-sqrt(b*b-4*a*c))/(2*a);  
    h = x[1] - x[0];

    y1 = newt(fd,s1,n);
    y2 = newt(fd,s2,n);
    
    value = (fd[2] +((6*s1-6)*fd[3]/6))/(h*h);
    if(value<0)
    	printf("maxima at %f as %f\n",s1,y1);
    else
    	printf("minima at %f as %f\n",s1,y1);
    value = (fd[2] +((6*s2-6)*fd[3]/6))/(h*h);
    if(value<0)
    	printf("maxima at %f as %f\n",s2,y2);
    else
    	printf("minima at %f as %f\n",s2,y2);    
}
//0 1 2 3
//-5 -7 -3 13
