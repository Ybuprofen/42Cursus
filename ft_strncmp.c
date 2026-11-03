/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:43:20 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/03 12:22:18 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    int i;

    i = 0;
    while (s2[i] && i < n - 1)
    {
        if (s2[i] != s1[i])
            return (s2[i] - s1[i]);
        i++;
    }
    return (s2[i] - s1[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    const char s1[] = "hello";
    const char s2[] = "hellp";
    size_t i = 4;

    printf("%d\n", strncmp(s1, s2, i));
    printf("%d\n", ft_strncmp(s1, s2, i));
    return (0);
}
*/