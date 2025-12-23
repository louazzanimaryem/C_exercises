//Compare all elements
#include <stdio.h>
int     ft_cae(int arr[], int size)
{
    int i = 0;
    int count =0;
    while(i < size-1)
    {
        int j = size -1;
        while(j > i)
        {
            if (arr[i] == arr[j])
            {
               return 1;
            }
            j--;
        }
     i++; 
    }
    return 0;
}
int main ()
{
    int arr[4] = {1, 3, 5, 8};
    printf("%d\n", ft_cae(arr, 4));
    return 0;
}