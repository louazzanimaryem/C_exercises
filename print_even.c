#include <stdio.h>
#include <unistd.h>
void    ft_putnbr(int n)
{
char c;
      if (n >= 10)
       ft_putnbr(n / 10);
      c = (n % 10) + '0';
     write(1, &c, 1);

}
void  ft_print_even(int n)
{
    int i = 0;
     while(i <= n)
    {
        if (i % 2 == 0)
        {
           ft_putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
   
}
int main ()
{
       ft_print_even(10);
         return 0;
}