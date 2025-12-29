#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num , num2 ;
    float n1, n2;
    int  sum_int, diff_int;
    float sumf, diff_f;
    scanf("%d %d", &num , &num2);
    scanf("%f %f", &n1, &n2);
    
   sum_int = num + num2;
   diff_int = num - num2;
   sumf = n1 + n2;
   diff_f = n1 - n2;
    printf("%d %d\n", sum_int, diff_int);
    printf("%.1f %.1f\n", sumf, diff_f);
    return 0;
}