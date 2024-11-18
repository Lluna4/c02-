unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int index;

    index = 0;
    while(index < size && src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    
    return index;
}