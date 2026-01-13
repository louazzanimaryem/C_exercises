#include <unistd.h>
int     ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    if(str[i]!='\0')
    {
        while(str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
            i++;
        }
    }
    return (result);
}
void    putnbr(int nb)
{
    if(nb > 10)
    {
        putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
}
int     reverse_digit(int n)
{
    int temp = 0;
    int result = 0;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        result = result * 10 + temp;
    }
    return result;
}
void    print(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int temp =0;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        putnbr(temp);
        write(1, "\n", 1);
    }   
}
int main(int argc, char **argv)
{
    int nb1;
    if(argc > 1)
    {
        nb1 = ft_atoi(argv[1]);
        print(reverse_digit(nb1));
    }

}