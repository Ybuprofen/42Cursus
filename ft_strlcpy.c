#include <stddef.h>
#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

size_t ft_strlcpy (char *dest, const char *src, size_t size)
{
    int i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';
    return (ft_strlen(src));
}

int main()
{
    char dest[] = "je teste un truc";
    const char src[] = "jfzeiofjzoef";
    size_t size = 9;

    printf("%ld\n", ft_strlcpy(dest, src, size));
    printf("%ld\n", strlcpy(dest, src, size));
    return 0;
}