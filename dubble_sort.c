#include <stdio.h>

int   dubble_sort(int arr[], int size, int n)
{
  int i = 0;
  
     
    while (i < size -1)
    {
        int j = 0;
        while(j < size - i - 1)
        {
            if (arr[j] > arr[j +1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
            j++;
        }
        i++;
    }
    return arr[size -1];
}
int main ()
{
    int arr[5] = {2, 1, 4, 3,5};
    int n = 5;
    int size = n;
    int resul = dubble_sort(arr, size, n);
    printf("the max is %d\n", resul);
    return 0;
}
