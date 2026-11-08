/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:21:18 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/10/26 12:06:23 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i > 0 && s[i - 1] == c && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static char	**free_result(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (NULL);
}

static char	**ft_fill(char **result, const char *s, char c)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			result[j] = ft_substr(s, i, len);
			if (!result[j])
				return (free_result(result, j));
			j++;
			i += len;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	return (ft_fill(result, s, c));
}
