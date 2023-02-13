//b.	Polynomial regression.
#include<stdio.h>
#include<math.h>
main()
{
 int n, i, j, k;
 float sumx=0, sumxsq = 0, sumy = 0, sumxy = 0, x[15], y[15];
 float sumx3= 0, sumx4 = 0, sumxsqy =0, a[20][20], u = 0.0, b[20];
 printf("How many data points?\n");
 scanf("%d", &n);
 printf("\nEnter the different values of x:\n");
 for (i=0;i<n;i++)
    scanf("%f", &x[i]);

 printf("\nThe corresponding values of y are:\n");
 for (i=0;i<n;i++)
    scanf("%f", &y[i]);
    
 for(i = 0; i < n; i++)
 {
  sumx += x[i];
  sumxsq += pow(x[i], 2);
  sumx3 += pow(x[i], 3);
  sumx4 += pow(x[i], 4);
  sumy += y[i];
  sumxy += x[i] * y[i];
  sumxsqy += pow(x[i], 2) * y[i];
 }
 a[0][0] = n;
 a[0][1] = sumx;
 a[0][2] = sumxsq;
 a[0][3] = sumy;
 a[1][0] = sumx;
 a[1][1] = sumxsq;
 a[1][2] = sumx3;
 a[1][3] = sumxy;
 a[2][0] = sumxsq;
 a[2][1] = sumx3;
 a[2][2] = sumx4;
 a[2][3] = sumxsqy;
 
 for(i = 0; i < 3; i++)
 {
  for(j = 0; j <= 3; j++)
   printf("%10.2f", a[i][j]);
  printf("\n");
 }
 for(k = 0; k <= 2; k++)
 {
  for(i = 0; i <= 2; i++)
  {
   if(i != k)
    u = a[i][k]/a[k][k];
   for(j = k; j <= 3; j++)
    a[i][j] = a[i][j] - u * a[k][j];
  }
 }
 for(i = 0; i < 3; i++)
 {
  b[i] = a[i][3]/a[i][i];
  printf("\nx[%d] = %f", i, b[i]);
 }
 printf("\n");
 printf("y = %fx^2 + %fx + %f", b[2], b[1], b[0]);
}


//x = -4 -3 -2 -1 0 1 2 3 4 5 
//y = 21 12 4 1 2 7 15 30 45 67 

//y = 1.98x2 + 2.99x + 2.03
