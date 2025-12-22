#include <stdio.h>
int ft_is_sorted(int arr[], int size)
{
    
   int i =0;
   while(i < size)
   {
    if (arr[i] < arr[i+1])
    {
        return 1;
    }else{
        return 0;
    }
    i++;
   }
}
int main ()
{
    int arr[4] = {2, 1, 5, 8};
    printf("%d\n", ft_is_sorted(arr, 4));
    return 0;
    
}
