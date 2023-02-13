#include <stdio.h>

float f[10][10];
float formula(int i,int j){
	return ((f[i+1][j]+f[i-1][j]+f[i][j+1]+f[i][j-1])/4);
}

int main(){
	int i,j,k,m,n,x,y;
	float l,r,t,b;
	printf("\t_______________________________________________________________\n");
	printf("\tProgram to solve Laplace's equation by finite difference method\n");
	printf("\tEnter boundary conditions\n");
	printf("\tValue on top side: ");
	scanf("%f",&l);
	printf("\tValue on bottom side: ");
	scanf("%f",&r);
	printf("\tValue on right side: ");
	scanf("%f",&t);
	printf("\tValue on left side: ");
	scanf("%f",&b);
	printf("\tEnter number of steps in x direction: ");
	scanf("%d",&m);
	printf("\tEnter number of steps in y direction: ");
	scanf("%d",&n);
	m++;
	n++; //number of mesh points is one more than number of steps
	            for(i=1;i<=m;i++)   //assigning boundary values begins
	            {
	              f[i][1]=b;
	              f[i][n]=t;
	            }
	            for(i=1;i<=n;i++)
	            {
	              f[1][i]=l;
	              f[m][i]=r;
	            }                         //assigning boundary values ends
	for(i=2;i<m;i++)
	for(j=2;j<n;j++)
	f[i][j]=t; //initialization of interior grid points 
		for(k=0;k<100;k++){
		
	            for(i=2;i<m;i++)
	            {
	               for(j=2;j<n;j++)
	               {
	                f[i][j]=formula(i,j);
	               }
	            }
				}                     //calculation by Gauss-Seidel Method
	            for(i=1;i<=m;i++)
	            {
	               for(j=1;j<=n;j++)
	               printf("%.2f\t",f[i][j]);
	               printf("\n");
	            }
	}
