int     ft_is_uppercase(char str)
{
    if (!(str >= 'A' && str <= 'Z'))
    {
        return 0;
    }
    return 1;
}

char *ft_strupcase(char *str)
{
    int     index;

    index = 0;
    while (str[index] != '\0')
    {
        if (ft_is_lowercase(str[index]) == 0)
        {
            str[index] += ('a' - 'A');
        }
        index++;
    }

    return str;
}