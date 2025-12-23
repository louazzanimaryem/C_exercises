#include <stdio.h>
int     palindrome(int arr[], int size)
{
    int i = 0;
    int j = size -1;
    while(i < j)
    {
        if(arr[i] != arr[j])
        {
            return 0;
        }
        i++;
        j--;
    }
       return 1;
}
int main()
{
    int arr[5] ={1, 2, 3, 7,9};
    printf("%d\n", palindrome(arr, 5));
    return 0;
}