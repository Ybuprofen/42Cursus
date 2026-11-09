/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 21:29:27 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/08 22:17:01 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp1;
	unsigned const char	*temp2;

	temp1 = (unsigned char *)dest;
	temp2 = (unsigned const char *)src;
	if (!dest || !src)
		return (NULL);
	if (temp1 > temp2)
	{
		i = n - 1;
		while (i > 0)
		{
			temp1[i] = temp2[i];
			i--;
		}
		temp1[i] = temp2[i];
	}
	if (temp1 < temp2)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
