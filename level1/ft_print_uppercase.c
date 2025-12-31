#include <unistd.h>
void ft_print_uppercase(void)
{
  char c = 'A';
    while(c <= 'Z')
  {
    write(1, &c, 1);
    c++;
  }
}
int main()
{
    ft_print_uppercase();
    return 0;
}