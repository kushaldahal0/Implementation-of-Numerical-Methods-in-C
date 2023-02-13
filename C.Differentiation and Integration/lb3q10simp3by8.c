#include <stdio.h>
#include <math.h>
#define f(x) sqrt(1- x*x)

int main(){
 int i, n,a,b;
 float sum =0,h,value;
 printf("fx = sqrt(1- x*x)\n");
 printf("\nEnter the initial and final values of fx ( a and b ):\n");
 scanf("%d%d", &a, &b);
 h = (b-a)/3.0;
 sum = f(a) + f(b) + 3*(f(h) + f(2*h));
 value = sum * h/8.0 *3;
 printf("Ans : %.3f",value);
}
// 0 to 1
