#include <unistd.h>

void    ft_print_numbers(void)
{
    char x = '0';
    while (x <= '9')
    {
       write(1, &x, 1);
       x++;
    }
    
}

int main ()
{
    ft_print_numbers();
    return 0;
}