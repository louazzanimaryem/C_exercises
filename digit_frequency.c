#include <unistd.h>
void    putnbr(int nb)
{
    if(nb > 9)
    {
        putnbr(nb / 10);
    }
    char c = nb % 10 +'0';
    write(1, &c, 1);
}
int     ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
   if(str[i] != '\0')
   {
     while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
   }
    return (result);
}

int     Count_Digit(int n, int digit)
{
    int count = 0;
    int temp =0;
    while (n > 0)
    {
         temp = n % 10;
           n = n / 10 ;
        if (temp == digit)
        {
            count++;
        }
    }
    return (count);
}

int main(int argc, char **argv)
{
    int nb, nb2, res;
    if(argc == 3)
    {
      nb = ft_atoi(argv[1]);
     nb2 = ft_atoi(argv[2]);
     res = Count_Digit(nb, nb2);
      putnbr(res);
      write(1, "\n", 1);
    } 
    return 0;
}