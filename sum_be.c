#include <stdio.h>

int ft_sum_between(int arr[], int size, int start, int end)
{
    if (start < 0 || end >= 0|| start > end)
    {
        return 0;
    }
    int i = start;
    int sum =0;
    while(i <= end)
    {
        sum +=arr[i];
        i++;
    }
   return sum;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
   int  start = 1;
   int end = 3;
    printf("the sum is :%d\n", ft_sum_between(arr, 5, start, end));
    return 0;
}
