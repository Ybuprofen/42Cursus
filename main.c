/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:42:51 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/06 19:10:34 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// ft_isalpha
//
// ft_isdigit
//
// ft_isalnum
//
// ft_isascii
//
// ft_isprint
//
// ft_strlen
// int main()
// {
// 	char str[] = "test1234";
// 	printf("ft_strlen = %ld\n", ft_strlen(str));
// 	printf("strlen = %ld\n", strlen(str));
// 	return 0;
// }

// ft_memset
// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	int		c = 48;
// 	size_t	n = 5;
// 	char	buffer2[] = "test";

// 	printf("%s\n", (char *)ft_memset(buffer2, c, n));
// 	return (0);
// }

// ft_bzero
//
// ft_memcpy
//
// ft_memmove
//
// ft_strlcpy
// int main()
// {
//     char dest[] = "je teste un truc";
//     const char src[] = "jfzeiofjzoef";
//     size_t size = 0;

//     printf("%d\n", ft_strlcpy(dest, src, size));
//     printf("%d\n", strlcpy(dest, src, size));
//     return 0;
// }

// ft_strlcat

// ft_toupper
//int main()
// {
//     int c = 't';
//     printf("%c\n", ft_toupper(c));
//     return 0;
// }

// ft_tolower
// int main()
// {
//     int c = 'T';
//     printf("%c\n", ft_tolower(c));
//     return 0;
// }

// ft_strchr
// int main()
// {
//     const char s[] = "NULL";
//     int c = '\0';
//     char *resultat_ft = ft_strchr(s, c);
//     char *resultat_std = strchr(s, c);
//     if (resultat_ft == NULL)
//         printf("ft_strchr : NULL (Non trouvé)\n");
//     else
//         printf("ft_strchr : %s\n", resultat_ft);
//     if (resultat_std == NULL)
//         printf("strchr : NULL (Non trouvé)\n");
//     else
//         printf("strchr : %s\n", resultat_std);
//     return 0;
// }

// ft_strrchr
// int main()
// {
//     const char s[] = "";
//     int c = '\0';
//     char *resultat_ft = ft_strrchr(s, c);
//     char *resultat_std = strrchr(s, c);
//     if (resultat_ft == NULL)
//         printf("ft_strrchr : NULL (Non trouvé)\n");
//     else
//         printf("ft_strrchr : %s\n", resultat_ft);
//     if (resultat_std == NULL)
//         printf("strrchr    : NULL (Non trouvé)\n");
//     else
//         printf("strrchr    : %s\n", resultat_std);
//     return 0;
// }

// ft_strncmp
// int main()
// {
//     const char s1[] = "test\200";
//     const char s2[] = "test\0";
//     size_t i = 6;

//     printf("%d\n", strncmp(s1, s2, i));
//     printf("%d\n", ft_strncmp(s1, s2, i));
//     return (0);
// }

// ft_memchr
//
// ft_memcmp
//
// ft_strnstr
//
// ft_atoi