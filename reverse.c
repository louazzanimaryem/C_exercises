#include <stdio.h>
void   reverse_ar(int arr[], int size)
{
    int i =0;
    int j = size -1;
    int temp =0;

    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0;

    printf("Before reverse:\n");
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }

    reverse_ar(arr, 5);

    i = 0;
    printf("\nAfter reverse:\n");
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
