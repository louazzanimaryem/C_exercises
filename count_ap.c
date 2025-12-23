//Count all pairs
#include <stdio.h>
int count_ap(int arr[], int size, int traget)
{
    int i =0;
    int count =0;
    while(i < size -1)
    {
        int j = i + 1;
        while(j < size)
        {
            if(arr[i] + arr[j] == traget)
            {
                count++;
            }
            j++;
        }
        i++;
    }
    return count;
}
int main ()
{
    int arr[4] = {1, 2, 3, 4};
    printf("%d\n", count_ap(arr, 4, 5));
    return 0;
}