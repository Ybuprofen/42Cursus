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
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while ((i < (len)) && big[i])
	{
		j = 0;
		while (((i + j) < len) && (little[j] == big[i + j]))
		{
			if (little[j] == big[i + j])
			{
				j++;
			}
			if (little[j] == '\0')
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main()
// {
// 	const char big[] = "ABCDABCDE";
// 	const char little[] = "CDE";
// 	size_t len = 10;

// 	printf("Ma Fonction : %s\n", ft_strnstr(big, little, len));
// 	printf("Lib : %s\n", strnstr(big, little, len));
// 	return 0;
// }