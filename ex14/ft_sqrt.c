/*int ft_sqrt(int nb)
{
    int i = 1;
    while (i < nb)
    {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}
*/

// algo BST version
int ft_sqrt(int nb)
{
    int mid;
    int low;
    int high;

    if (nb <= 0)
        return 0;

    if (nb == 1)
        return 1;

    high = nb;
    low = 1;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (mid * mid == nb)
            return mid;
        else if (mid * mid > nb)
            high = mid;
        else
            low = mid + 1;
    }
    return 0;
}
/*
int main()
{
    printf("%d\n", ft_sqrt(2));
}*/