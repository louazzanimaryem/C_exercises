#include <stdio.h>
#include <string.h>
void        ft_sort(char **str, int size)
{
    int i = 0;
    int j;
    while(i < size -1)
    {
        j = i + 1;
        while(j < size)
        {
           if(strcmp(str[i],str[j]) > 0)
        {
            char *temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
        j++;
    }
    i++;
    }
}
int main()
{
  char *arr[] = {"abc", "bcf","bcd" };
     int size = 3;
     int i = 0;
       ft_sort(arr, size);
     while(i < size)
     {
        printf("%s\n", arr[i]);
        i++;
     }
     return 0;
}