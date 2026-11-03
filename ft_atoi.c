/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:25:21 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/03 12:25:21 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;

    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    res *= sign;
    return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "    -123456789";

    printf("%d\n", atoi(str));
    printf("%d\n", ft_atoi(str));
    return 0;
}
*/
