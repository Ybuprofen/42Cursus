/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissot <tbrissot@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 17:24:46 by tbrissot          #+#    #+#             */
/*   Updated: 2026/11/13 17:45:21 by tbrissot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char const *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

void	ft_free(char **s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	*wordmem(char const *s, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = ft_calloc(((end - start +1)), sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	return (word);
}

char	**fill_words(char **dest, char const *s, char c)
{
	size_t	i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			dest[j] = wordmem(s, start, i);
			if (!dest[j])
				ft_free(dest, j);
			j++;
			start = -1;
		}
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = ft_calloc((wordcount(s, c) + 1), sizeof(char *));
	if (!dest)
		return (NULL);
	return (fill_words(dest, s, c));
}
// int main()
// {
// 	char **s;
// 	int i = 0;
// 	int j = 0;
// 	s = ft_split("hello!zzzzzzzz", 'z');
// 	while (s[i])
// 	{
// 		printf("%s\n", s[i]);
// 		i++;
// 		j++;
// 	}
// 	return (0);
// }
// // int main()
// // {
// // 	char s[] = "hello!";
// // 	char c = ' ';
// // 	printf("%d", wordcount(s, c));
// // 	return 0;
// // }