int     ft_str_is_alpha(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= 'A' && *str <= 'Z'))
        {
            if (!(*str >= 'a' && *str <= 'z'))
                return 0;
        }
        str++;
    }
    return 1;
}