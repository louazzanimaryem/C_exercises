#include <unistd.h>
#include <stdio.h>
int     ft_sum_array(int arr[], int size)
{
    int i =0;
    int sum =0;
    while(i < size)
    {
           sum +=arr[i];
           i++;
    }
    return sum;
}
int main ()
{
    int arr[4] = {1, 2, 3, 4};
    printf("sum of array is :%d\n", ft_sum_array(arr, 4));
    return 0;

}