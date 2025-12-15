#include <stdio.h>
#include <unistd.h>
int     ft_count_even(int arr[], int size)
{
    int i = 0;
    int count =0;
    while(i < size)
    {
        if (arr[i] % 2==0)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main ()
{
    int arr[5]={2, 3, 4, 6, 7};
    printf("the even numb %d\n", ft_count_even(arr, 5));
    return 0;
}