#include <stdio.h>
#include <math.h>
#define f(x) exp(x)

int main(){
 int i, n,a,b;
 float sum =0,h,value;
 printf("fx = 1/x\n");
 printf("\nEnter the initial and final values of fx ( a and b ):\n");
 scanf("%d%d", &a, &b);
 h = (b-a)/2.0;
 sum = f(a) + f(b) + 4*f((a+b));
 value = sum * h/3.0;
 printf("Ans : %.3f",value);
}
// -1 1
