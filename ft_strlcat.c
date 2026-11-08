/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:26:40 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/08 02:18:13 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendst)
	{
		return (size + lensrc);
	}
	while (src[i] && (lendst + i < size - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
//     char dst[11] = "a";
//     char src[] = "prout";
//     size_t size = 15;

//     printf("Ma Fonction : %zu\n", ft_strlcat(dst, src, size));
//     // printf("Fonction de base: %ld\n", strlcat(dst, src, size));
//     return (0);
// }
