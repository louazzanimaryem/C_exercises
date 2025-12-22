#include <stdio.h>

int ft_first_negative(int arr[], int size)
{
    //int max = arr[0];
    int i = 0;
    while(i < size)
    {
        if (arr[i] < 0)
        {
            return i;
           
        }
        i++;
    }
    return -1;
}
int main ()
{
    int arr[4]={3, -1, 3, -3};
    printf("the first negative index :%d\n", ft_first_negative(arr, 4));
    return 0;
}