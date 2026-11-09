/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:53:03 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/09 20:13:34 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	ft_bzero(ptr, (nmemb * size));
	if (!ptr)
		return (NULL);
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	return (ptr);
}
