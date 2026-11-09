/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:38:45 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/09 20:11:30 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = ft_strlen(s);
	dest = malloc((sizeof(char) * len) + 1);
	if (!dest)
		return (NULL);
	if (!s)
		return (NULL);
	while (s[i] && i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main()
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char *dest = ft_strdup(src);
// 	char *dest2 = strdup(src);
//
// 	printf("%s\n", dest);
// 	printf("%s\n", dest2);
// 	return (0);
// }