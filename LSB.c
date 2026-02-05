#include <stdio.h>
//check Least Significant Bit
int main()
{
    int number;
    printf("entre a positive number :\n");
    scanf("%d", &number);
    
      if(number & 1)
      {
        printf("LSB is set\n");
      }
      else
      {
        printf("LSB is not set \n");
      }
      return 0;
}