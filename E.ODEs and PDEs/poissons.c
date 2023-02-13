#include<stdio.h>

#define g(x,y) 2*x*x*y*y

float f[10][10];
float formula(int i,int j,int h){
	return ((f[i+1][j]+f[i-1][j]+f[i][j+1]+f[i][j-1]-(h*h*g(i,j)))/4);
}

int main(){
		int i,j,k,m,ff,x,y;
		float h;
		printf("\t_______________________________________________________________\n");
		printf("\tProgram to solve Poission's equation by finite difference method\n");
		printf("\tEnter number of steps : ");
		scanf("%d",&m);
		printf("enter initial f:	");
		scanf("%d",&ff);
		printf("enter boundry h:");
		scanf("%f",&h);
		m++; //number of mesh points is one more than number of steps
	            for(i=1;i<=m;i++)   //assigning boundary values begins
	            {
	              f[i][1]=f[i][m]=f[1][i]=f[m][i]=ff;
	            }
		for(i=2;i<m;i++)
		for(j=2;j<m;j++)
		f[i][j]=h;
		
        for(i=2;i<m;i++)
        {
            for(j=2;j<m;j++)
            {
                f[i][j]=formula(i,j,h);
            }
        }
      //calculation by Gauss-Seidel Method
        for(i=1;i<=m;i++)
	       {
	        for(j=1;j<=m;j++)
	           printf("%.2f\t",f[i][j]);
	           printf("\n");
	        }
	}
