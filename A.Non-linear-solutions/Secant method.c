//Program to find the root of non-linear equation by Secant method.

#include<stdio.h>
#include<conio.h>

#define f(x) x*x+x-2
#define EB 0.000001
#define max 10


int main()
{
	int count=0;
	float root,x1,x2,x3,f1,f2;
	printf("Enter two initial points:\n");
	scanf("%f%f",&x1,&x2);
	lebel:
	f1=f(x1);
	f2=f(x2);
	x3=x2-(f2*(x2-x1)/(f2-f1));
	if(fabs((x3-x2)/x3)>EB)
	{
		x1=x2;
		f1=f2;
		x2=x3;
		f2=f(x3);
		count++;
		goto lebel;

	}
	else
	{
		root=x3;
		printf("The root is %f.\n",root);
    	printf("The number of iteration is:%d\n",count);
	}
		getch();
	return(0);
}
