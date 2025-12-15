#include <stdio.h>

int ft_find_max(int arr[], int size)
{
     if (size == 0)
    {
        return 0;
    }
    int i = 1;
    int max = arr[0];
   
    while(i < size)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
      i++;
    }
    return max;
}
int main()
{
    int arr[4] = {2, 4, 6, 8};
    printf("the max is :%d\n", ft_find_max(arr, 4));
    return 0;
}