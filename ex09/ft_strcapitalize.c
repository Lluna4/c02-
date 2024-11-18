//#include <stdio.h>
int     ft_is_lowercase(char str)
{
    if (!(str >= 'a' && str <= 'z'))
    {
        return 0;
    }
    return 1;
}

char *ft_strcapitalize(char *str)
{
    char cap;
    int index;

    cap = 1;
    index = 0;
    while (str[index] != '\0')
    {
        if (str[index] == ' ')
        {
            cap = 1;
            index++;
            continue;
        }
        if (cap == 1)
        {
            if (ft_is_lowercase(str[index]))
                str[index] -= ('a' - 'A');
            cap = 0;
        }
        index++;
    }
    return str;
}
//Dear corrector, uncomment this and #include <stdio.h> to check if it works

/*
int main()
{
    char a[] = "aksnajsbnnajs 1aa qw1212 aaaaa";
    printf("%s\n", ft_strcapitalize(a));
}*/