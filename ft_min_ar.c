#include <stdio.h>
int     ft_min_arr(int arr[], int size)
{
    int min = arr[0];
    int i = 1;
    while(i < size)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        i++;
    }
    return min;
}
int main ()
{
    int arr[] = {5, 9, 2, 7, 3};
    int size = 5;
    printf("min is %d\n", ft_min_arr(arr, size));
    return 0;
}