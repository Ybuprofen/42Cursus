/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:43:20 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/07 18:10:45 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H "libft.h"

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <bsd/string.h>
int	ft_isalpha(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_atoi(const char *str);
int	ft_isascii(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isprint(unsigned char c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *str, const char *substr, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int ft_toupper(int c);
size_t ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void    ft_bzero(void  *s, size_t n);
#endif
