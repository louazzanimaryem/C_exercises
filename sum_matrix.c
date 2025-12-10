#include <stdio.h>

int     sum_matrix(int arr[][3], int rows, int cols)
{
    int i = 0;
    int sum = 0;
    while(i < rows)
    {
        int j = 0;
        while(j < cols)
        {
            sum +=arr[i][j];
            j++;
        }
        i++;
    }
    
    return sum;
}
int main ()
{
    int arr[2][3] = {{1,2,3}, {2,3,4}};
    int result = sum_matrix(arr, 2, 3);
    printf("the sum is %d\n", result);
    return 0;
}