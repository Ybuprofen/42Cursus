/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:36:49 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/10 20:40:44 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digitlen(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*dest;
	int			negatif;

	negatif = 0;
	if (n < 0)
	{
		negatif = 1;
		n *= -1;
	}
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest = ft_calloc((digitlen(n) + negatif + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (n)
	{
		dest[digitlen(n) + negatif - 1] = (n % 10) + 48;
		n = n / 10;
	}
	if (negatif == 1)
		dest[0] = '-';
	return (dest);
}
