#include <unistd.h>
int     check_prime(int n)
{
    if(n <= 1)
    {
        return (0);
    }
    int i = 2;
    while(i <= n / i)
    {
        if(n % i == 0)
        {
            return (0);
        }
       
        i++;
    }
    return (1);
}
void    putnb(int nb)
{
        if(nb>= 10)
        {
            putnb(nb/ 10);
        }
        char c = nb % 10 + '0';
        write(1, &c, 1);
}
void    print_prime(int n)
{
    int i = 1;
    int j;
    char c;
    while(i <= n)
    {
        j =  check_prime(i);
        if(j == 1)
        {
            putnb(i);
            write(1, "\n", 1);
        }
        i++; 
    }
}
int     add_sum_prime(int nb)
{
    int sum = 0;
    int i = 1;
    int j;
    while(i <= nb)
    {
        j = check_prime(i);
        if(j == 1)
        {
              sum+=i;
        }
        i++;   
    }
    return sum;
}
int    ft_atoi(char *c)
{
    int i = 0;
    int result= 0;
    while(c[i] != '\0')
    {
        if(c[i] >= '0' && c[i] <= '9')
        {
    
            result = result *10 + (c[i] -'0');
        } 
        i++;
     }
     return result;
}
int main(int argc, char **argv)
{
   // int i = 0;
   int sum;
    if(argc > 1)
    {
        int nb = ft_atoi(argv[1]); 
          //  print_prime(nb);
           sum = add_sum_prime(nb);
           putnb(sum);
           write(1, "\n", 1);
    }
    return 0;
}