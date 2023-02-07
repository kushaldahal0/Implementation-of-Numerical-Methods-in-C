//Program to find root by using bisection method.


#include<stdio.h>
#include<conio.h>
#define f(x) (x*x*x)-5*x-9
#define EB 0.001


int main()
{
	int count=0;
	float a,b,f0,f1,f2,x0,x1,x2,root;
	printf("Enter the initial values a and b:\n");
	scanf("%f%f",&a,&b);
	x1=a;
	x2=b;
	f1=f(x1);
	f2=f(x2);
	if(f1*f2>0)
    {
        printf("x1 and x2 doesn't contain any root.\n");
        exit(0);
    }
    else
    {
        lebel:
        x0=(x1+x2)/2.0;
        f0=f(x0);
        if((f0*f2)<0)
        {
            x1=x0;
        }
        else
        {
            x2=x0;
            f2=f0;
        }
    }
    if((fabs(x2-x1)/x2)<EB)
    {
        root=(x1+x2)/2;
        printf("The root is:%f\n",root);
        printf("Number of iterations:%d\n",count);
    }
    else
    {
    	count++;
        goto lebel;
    }
	getch();
	return(0);
}

