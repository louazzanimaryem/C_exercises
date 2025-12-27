#include <stdio.h>
int     ft_find_second_max(int arr[], int size)
{
    int i = 1;
    int max = arr[0];
    int s_max = -1;
      while(i < size)
    {
        if ( arr[i] > max)
        {
           s_max = max;
           max = arr[i];
         }else if (arr[i] < max && arr[i] > s_max)
          {
             s_max = arr[i];
          }
            i++;
    }
       return s_max;
}
int main ()
{
    int arr[] = {3, 9, 1, 7};
    printf("the second max n is :%d\n", ft_find_second_max(arr, 4));
      return 0;
}