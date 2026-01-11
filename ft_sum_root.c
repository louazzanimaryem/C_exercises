#include <unistd.h>

void    putnbr(int nb)
{
    if(nb >= 10)
    {
        putnbr(nb / 10);
    }
      char c = nb % 10 + '0';
      write(1, &c, 1);
}
int     ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
       res = res * 10 + (str[i] -'0');
        i++;
    }
    return (res);
}
int     ft_sum_digit(int nb)
{
    int sum = 0;
    while(nb >= 10)
    {
        sum = 0;
        int temp = nb;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        nb = sum;   
    }
    return (nb);
}
int main(int argc, char **argv)
{
    int sum = 0;
    if(argc > 1)
    {
        int nb = ft_atoi(argv[1]);
       
      sum = ft_sum_digit(nb);
         putnbr(sum);
        write(1, "\n", 1);
    }
}
