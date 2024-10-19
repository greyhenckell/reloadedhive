#include <unistd.h>
#include "../includes/ft.h"

void ft_putstr(char *src)
{
    write(1, src, ft_strlen(src));
}
