/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:07:06 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/08 02:27:31 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}

// int main()
// {
//     char s[] = "test";
//     size_t n = 5;
//     ft_bzero(s, n);
//     void *mem = s;

//     printf("%s\n", (char *)mem);
//     return (0);
// }