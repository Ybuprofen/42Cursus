/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:27:01 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/09 19:34:04 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	temp2;

	i = 0;
	temp1 = (unsigned char *)s;
	temp2 = (unsigned char)c;
	while (i < n)
	{
		if (temp1[i] == temp2)
		{
			return (&temp1[i]);
		}
		i++;
	}
	return (NULL);
}
