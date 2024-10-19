#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphanet()
{
    int i = 97;
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}
