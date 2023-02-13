#include <stdio.h>
#include <math.h>
#define f(x) pow(x,3)+2

int main(){
 int i, n,a,b;
 float sum =0,h,value;
 printf("fx = x^3 + 2\n");
 printf("\nEnter the initial and final values of fx ( a and b ):\n");
 scanf("%d%d", &a, &b);
 sum = f(a) + f(b);
 h = b-a;
 value = sum * h/2.0;
 printf("Ans : %.3f",value);
}
