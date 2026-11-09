/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:14:25 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/09 21:20:15 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp1;
	char	*temp2;

	i = 0;
	temp1 = (char *)dest;
	temp2 = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*temp1 = *temp2;
		i++;
		temp1++;
		temp2++;
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "blabla";
// 	char dest[] = "";
// 	size_t n = 5;

// 	printf("%s", ft_memcpy(dest, src, n));
// 	return (0);
// }
