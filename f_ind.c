#include <stdio.h>
int  ft_find_index(int arr[], int size, int traget)
{
    int i = 0;
    while(i < size)
    {
        if (arr[i] == traget)
        {
            return i;
        }
        i++;
    }
  return -1;
}
int main ()
{
    int arr[4] = {2, 4, 6,7};
    printf("the index of traget :%d\n", ft_find_index(arr, 4, 6));
    return 0;
}