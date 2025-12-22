#include <stdio.h>

int ft_count_positive(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    int i = 0;
    int count = 0;
    while(i < size)
    {
        if (arr[i] > 0)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main ()
{
    int arr[4] = {-1, 3, 7, -3};
    printf("teh count of positive num :%d\n", ft_count_positive(arr, 4));
    return 0;
}
