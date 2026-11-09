/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 22:24:52 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/09 23:43:37 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = start;
	j = 0;
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (start + len > ft_strlen(s))
	{
		len = (ft_strlen(s) - start);
	}
	dest = malloc((sizeof(char const) * len) + 1);
	if (!s || !dest)
		return (NULL);
	while (s[i] && j < len)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int main()
// {
//   char const s[] = "hola";
//   unsigned int start = 1;
//   size_t len = 1;

//   printf("%s", ft_substr(s, start, len));
//   return 0;
// }