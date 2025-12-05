#include <stdio.h>
int  linear_search(int arr[], int size, int value)
{
    int i = 0;
    while(i < size)
    {
        if (arr[i] == value)
        {
            return i;
        }
        i++;
    }
    return -1;

}
int main()
{
    int arr[5] = {3, 4, 5, 7, 9};
     int index = linear_search(arr, 4, 7);
     printf("the index of %d\n", index);
     return 0;
     

}