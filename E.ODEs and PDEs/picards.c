
// C program for Picard's iterative method
   
#include <math.h>
#include <stdio.h>
   
// required macros defined below:
#define Y1(x) (1 + (x) + pow(x, 2) / 2)
#define Y2(x) (1 + (x) + pow(x, 2) / 2 + pow(x, 3) / 3 + pow(x, 4) / 8)
#define Y3(x) (1 + (x) + pow(x, 2) / 2 + pow(x, 3) / 3 + pow(x, 4) / 8 + pow(x, 5) / 15 + pow(x, 6) / 48)
   
int main()
{
    float start_value = 0, end_value = 3,
           allowed_error = 0.4, temp;
    float y1[30], y2[30], y3[30];
    int count;
   
    for (temp = start_value, count = 0;
         temp <= end_value;
         temp = temp + allowed_error, count++) {
   
        y1[count] = Y1(temp);
        y2[count] = Y2(temp);
        y3[count] = Y3(temp);
    }
   
    printf("\ncount\t\tX\t\tY(1)\t\tY(2)\t\tY(3)\n");
    for (temp = start_value,count = 0;
         temp <= end_value;
         temp = temp + allowed_error,count++) {
   		
        // considering all values
        // upto 4 decimal places.
        printf("%d\t\t%.4f\t\t%.4f\t\t%.4f\t\t%.4f\n ", count,temp,y1[count],y2[count],y3[count]);
    }

    return 0;
}
