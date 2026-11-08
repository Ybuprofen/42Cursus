/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:43:20 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/03 12:22:20 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

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