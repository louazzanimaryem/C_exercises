#include <unistd.h>
#include <stdio.h>

int ft_sum_digits(int n)
{

     int sum = 0;
    
     while(n > 0)
   {
         sum += n % 10;
          n = n / 10;
   } 
   while (sum > 9)
   {
     int temp = sum;
        sum = 0;
     while(temp > 0)
     {
        sum+= temp % 10;
          temp = temp / 10;
     }
   }
    return sum;
}
int main()
{
    int n;
        printf("the num :\n");
        scanf("%d", &n);
        int result =  ft_sum_digits(n);
        printf("the result %d\n", result);
      return 0;
}