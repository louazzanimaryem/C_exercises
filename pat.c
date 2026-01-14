#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
  	// Complete the code to print the pattern.
    int i = 0, j;

    while(i < size)
    {
        j = 0;
        while(j < size)
        {
            int top = i;
            int left = j;
            int right = size -1-j;
            int bottom = size - 1-i;
             int min = top;
            if (left < min) min = left;
            if (right < min) min = right;
            if (bottom < min) min = bottom;

            printf("%d", n - min);
            if (j != size - 1) printf(" ");
            j++;
            }
           i++;
           printf("\n");
        }
        return 0;
    }