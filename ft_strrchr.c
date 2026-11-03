#include <stddef.h>
int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
        {
            return ((char *)&s[i]);
        }
        i--;
    }
    return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    const char s[] = "prout slt sdk";
    int c = 't';
    char *resultat_ft = ft_strrchr(s, c);
    char *resultat_std = strrchr(s, c);
    if (resultat_ft == NULL)
        printf("ft_strrchr : NULL (Non trouvé)\n");
    else
        printf("ft_strrchr : %s\n", resultat_ft);
    if (resultat_std == NULL)
        printf("strrchr    : NULL (Non trouvé)\n");
    else
        printf("strrchr    : %s\n", resultat_std);
    return 0;
}
*/