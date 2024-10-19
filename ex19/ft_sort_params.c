#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
    write(1, "\n", 1);
}

void sort_params(char **s, int len)
{
    int i;
    int j;
    char temp;

    i = 1;
    j = i + 1;
    while (i < len)
    {
        while (j < len)
        {
            if (*s[i] > *s[j])
            {
                temp = *s[i];
                *s[i] = *s[j];
                *s[j] = temp;
            }
            j++;
        }
        ft_putchar(*s[i]);
        j = i + 1;
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        sort_params(argv, argc);
        return 1;
    }
    return 0;
}