/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:43:20 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/03 12:22:19 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	sublen;

	i = 0;
	sublen = ft_strlen((char *)little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && (i < (len - 1)))
	{
		if (big[i] == '\0')
			return (NULL);
		while (little[i + sublen])
		{
			if (little[i] == big[i])
				i++;
			else
				return (NULL);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main()
// {
// 	const char big[] = "bonjour je suis moi";
// 	const char little[] = "je";
// 	size_t len = 11;

// 	printf("Ma Fonction : %s\n", ft_strnstr(big, little, len));
// 	printf("Lib : %s\n", strnstr(big, little, len));
// 	return 0;
// }