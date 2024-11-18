#include <stdio.h>
int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		index;
	unsigned int		max_src;

	index = 0;
	max_src = ft_strlen(src);
	while (index < n)
	{
		if (index >= max_src)
		{
			dest[index] = '\0';
		}
		else
		{
			dest[index] = src[index];
		}
		index++;
	}
	return dest;
}
