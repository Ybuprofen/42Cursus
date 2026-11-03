/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:43:20 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/03 12:22:19 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strnstr(const char *str, const char *substr, size_t len)
{
    int i;
    int sublen;

    i = 0;
    sublen = ft_strlen(substr);
    if (substr[0] == '\0')
        return (str);
    while (str[i] && i < len - 1)
    {
        if (str[i] == '\0')
            return NULL;
        while (substr[i + sublen])
        {
            if (substr[i] == str[i])
                i++;
            else
                return NULL;
        }
    }
    return 0;
}
