//find duplicates
#include <stdio.h>
int ft_fdup(int arr[], int size)
{
    int i = 0;
    int count = 0;
    while(i < size -1)
    {
        int j = i + 1;
        while(j < size)
        {
            if (arr[i] == arr[j])
            {
             count++;
            }
            j++;
        }
        i++;
    }
    return count;

}
int main()
{
    int arr[4] = {2, 4, 2, 4};
    printf("%d\n", ft_fdup(arr, 4));
    return 0;
}