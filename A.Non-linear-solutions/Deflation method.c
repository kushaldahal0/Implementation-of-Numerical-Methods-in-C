//Program of deflation method.

#include<stdio.h>
#include<conio.h>


int main()
{
    float a[50],b[50],A,rem;
    int n,i;
    printf("Enter degree of dividend polynomial:\n");
    scanf("%d",&n);
    printf("Enter coefficients of dividend polynomial:\n");
    for(i=n;i>=0;i--)
    scanf("%f",&a[i]);
    printf("Enter the magnitude of divisor polynomial of form x-a:\n");
    scanf("%f",&A);
    b[n] =0;
    for(i=n-1;i>=0;i--)
    {
        b[i]=(a[i+1]+b[i+1]*A);
    }
    rem = a[0]+b[0]*A;
    printf("The  coefficients of quotient polynomial is\n");
    for(i=n-1;i>=0;i--)
    printf("%f ",b[i]);
    printf("\nThe remainder is %f",rem);
    getch();
    return(0);
}
