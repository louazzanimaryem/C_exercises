//Detect Sorted Order (ASC / DESC / NOT SORTED)
#include <stdio.h>
int     ft_DSO(int arr[], int size)
{
    if(size == 0 || size == 1)
    {
        return 1;
    }
       int is_asc = 1;
       int is_desc = 1;
      int i = 0;
    while(i < size - 1)
    {
        if (arr[i] > arr[i +1])
        {
          is_asc = 0;
        }
        if ( arr[i] < arr[i + 1])
        {
           is_desc = 0;
        }
        i++;
    }
    if(is_asc)
         return 1;
    if(is_desc)
    return -1;

    return 0;
}
int  main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 3, 2, 1};
    int arr3[] = {1, 3, 2, 4};

    printf("%d\n", ft_DSO(arr1, 4));
    printf("%d\n", ft_DSO(arr2, 4)); 
    printf("%d\n", ft_DSO(arr3, 4));
    return 0;
}