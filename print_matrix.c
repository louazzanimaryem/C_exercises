#include <stdio.h>
int main()
{
    int i =0;
    int arr[2][3] = {
        {1, 3, 5},
        {3, 4, 7}
    };
    while(i < 2)
    {
      
        int j =0;
        while(j < 3)
        {
            printf("%d", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}