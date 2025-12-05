#include <stdio.h>
int  find_first_occurrence(int arr[], int size, int val)
{
    int left = 0;
    int right = size -1;
    int result = -1;
    while( left <= right)
    {
        int mid = left + (right - left) /2;
        if (arr[mid] == val)
      {
        result = mid;
        right = mid -1;
      }
      else if (arr[mid] < val)
      {
       left = mid + 1;
      }else {
        right = mid -1;
      }  
    }
    return result;
}
int main ()
{
    int num[] = {1, 3, 4, 4, 4, 6};
    int index = sizeof(num) / sizeof(num[0]);
    int val = 4;
    int result = find_first_occurrence(num, index ,val);
    if (result != -1)
    {
        printf("the index %d the val %d\n", val, result);
    }
    else {
        printf("we did find the value \n");
    }
    return 0;
}
