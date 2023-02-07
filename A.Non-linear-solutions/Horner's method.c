/*//Program to evaluate the polynomial by Horner's  method.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	float x,b[50],a[50];
	printf("Enter the degree of polynomial:\n");
	scanf("%d",&n);
	printf("Enter the coefficients of polynomial:\n");
	for(i=n;i>=0;i--)
	scanf("%f",&a[i]);
	printf("Enter the value at which polynomial to be evaluated:\n");
	scanf("%f",&x);
	b[n]=a[n];
	for(i=n-1;i>=0;i--)
	b[i]=a[i]+b[i+1]*x;
	printf("The functional value at %f is %f.\n",x,b[0]);
	getch();
	return(0);
}*/
//Program to evaluate the polynomial by Horner's  method.


#include<stdio.h>
#include<conio.h>


int main()
{
	int i,n;
	float x,b[50],a[50];
	printf("Enter the degree of polynomial:\n");
	scanf("%d",&n);
	printf("Enter the coefficients of polynomial:\n");
	for(i=n;i>=0;i--)
	scanf("%f",&a[i]);
	printf("Enter the value at which polynomial to be evaluated:\n");
	scanf("%f",&x);
	b[n]=a[n];
	while(n>0)
	{
		b[n-1]=a[n-1]+b[n]*x;
		n--;
	}
	printf("The functional value at %f is %f.\n",x,b[0]);
	getch();
	return(0);
}

