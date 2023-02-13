#include<stdio.h>
#include<math.h>
//cholesky
int main(){
	int n, i,j,k,flag = 0;
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
	 for(i=1;i<=n;i++)
		  for(j=1;j<=n;j++)
		  	if(a[i][j] != a[j][i])	flag = 1;
	 
	 if(flag ==1){	
	  printf("matrix not symmetric");
   	  return 0;
	 }
	 for(i=1;i<=n;i++)
	 	for(j=1;j<=n;j++)
	 		u[i][j] = 0;

	
		for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			if(i==j){
				sum = 0;
				for(k=1;k<i;k++){
					sum += u[k][i]*u[k][i];
				}
				u[i][i] = sqrt(a[i][i] - sum);
			} 
		  	else if(j>i){
		  		sum = 0;
		  		for(k=1;k<i;k++){
					sum += u[k][i]*u[k][j];
				}
				u[i][j] = (a[i][j] - sum)/u[i][i];
			  }	
		  	
		  }
 	 }

	 printf("U Matrix\n ");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   
			   printf("%.3f\t", u[i][j]);
		  }
		  printf("\n");
	 }
	 	 printf("U^t Matrix\n ");
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n;j++)
		  {
			   
			   printf("%.3f\t", u[j][i]);
		  }
		  printf("\n");
	 }
}
