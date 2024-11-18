#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

void ft_puthex(int nb)
{
    if (nb >= 16)
    {
        ft_puthex(nb/16);
        nb %= 16;
    }
    if (nb > 9)
        ft_putchar((nb - 10) + 'a');
    else
        ft_putchar(nb + '0');
}

int     ft_is_printable(char str)
{
    if (!(str >= ' ' && str <= '~'))
    {
        return 0;
    }
    return 1;
}

void ft_putstr_non_printable(char *str)
{
    while (*str != '\0')
    {
        if (ft_is_printable(*str))
            ft_putchar(*str);
        else
        {
            ft_putchar('\\');
            if (*str < 16)
                ft_putchar('0');
            ft_puthex((int)(*str));
        }
        str++;
    }
}

/*
int main()
{
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/