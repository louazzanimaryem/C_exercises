#include <stdio.h>
int   ft_count_traget(int arr[], int size, int traget)
{
    int  i = 0;
    int count = 0;
    while(i < size)
    {
        if (arr[i] == traget)
         {
            count++;
         }
         i++;
    }
    return count;
}
/*int main ()
{
     int arr[] = {2, 4, 2, 5, 2};
     printf("count :%d\n", ft_count_traget(arr, 5, 2));
     return 0;
}*/