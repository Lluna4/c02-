int     ft_is_lowercase(char str)
{
    if (!(str >= 'a' && str <= 'z'))
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
            str[index] -= ('a' - 'A');
        }
        index++;
    }

    return str;
}