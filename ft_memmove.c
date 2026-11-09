/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 21:29:27 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/09 20:52:24 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp1;
	unsigned const char	*temp2;

	temp1 = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
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

// int main()
// {
// 	while (av[1][i])
// {
//     buffer[i] = av[1][i];
//     //buffer2[i] = av[1][i];
//     i++;
// }
// init_size = i;
// buffer[i] = '\0';
// //buffer2[i] = '\0';
// i = 0;
// size = av[3][0] - '0';
// printf("%p", memcpy(buffer + 2, buffer, size));
// printf("\n");
// while (i < init_size)
// {
//     printf("%c", buffer[i]);
//     if (i != init_size - 1)
//         printf(" ,");
//     i++;
// }
// i = 0;
// printf("\n");
// printf("%p", ft_memcpy(buffer + 2, buffer, size));
// printf("\n");
// while (i < init_size)
// {
//     printf("%c", buffer[i]);
//     if (i != init_size - 1)
//         printf(" ,");
//     i++;
// }
// }
