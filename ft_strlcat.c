/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:26:40 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/06 19:08:41 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dst);
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

#include <stdio.h>
#include <bsd/string.h>
int main()
{
    char dst[11] = "a";
    char src[] = "prout";
    size_t size = 15;

    printf("Ma Fonction : %zu\n", ft_strlcat(dst, src, size));
    // printf("Fonction de base: %ld\n", strlcat(dst, src, size));
    return (0);
}
