#include<stdio.h>

int main(){
	int n, i,j,k;
	printf("Enter the order of matrix");
	scanf("%d",&n);
	float a[n][n], l[n][n],u[n][n],sum;
	for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   printf("a[%d][%d] = ",i,j);
			   scanf("%f", &a[i][j]);
		  }
		  printf("\n");
	 }
	 for(i=1;i<=n;i++){
	 	for(j=1;j<=n;j++){
	 		u[i][j] = 0;
	 		l[i][j] = 0;
		 }
	 }
	 for(j=1;j<=n;j++) u[1][j] = a[1][j];
	 for(i=1;i<=n;i++) l[i][i] = 1;
	 for(i=1;i<=n;i++) l[i][1] = a[i][1]/u[1][1];

	 
	 for(j=2;j<=n;j++){
	 	for(i =2;i<=j;i++){
	 		sum = a[i][j];
	 		for(k=1;k<=i-1;k++)
	 			sum -=l[i][k]*u[k][j];
			u[i][j] = sum;
		}	
	 }
	 
	 for(i=j+1;i<=n;i++){
	 	sum = a[i][j];
	 	for(k=1;k<=j-1;k++)
	 		sum -= l[i][k]*u[k][j];
	 	l[i][j] = sum /u[j][j];
	 }

	 printf("U Matrix\n ");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   
			   printf("%f\t", u[i][j]);
		  }
		  printf("\n");
	 }
	 	 printf("L Matrix\n ");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   
			   printf("%f\t", l[i][j]);
		  }
		  printf("\n");
	 }
}
