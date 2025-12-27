#include <stdio.h>
int  sum_even(int n)
{
    int i = 1;
    int sum = 0;
    while(i < n)
    {
        if (i % 2 == 0)
        {
            sum +=i;
        }
        i++;
    }
    return sum;
}
int main ()
{
    int n;
    printf(" entre the num\n");
    scanf("%d", &n);
       int result = sum_even(n);
       printf("the sum of num is %d\n", result);
       return 0;
}
