/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:37:20 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/10/20 18:48:11 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	total_size;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	copy = malloc(total_size + 1);
	if (!copy)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		copy[j++] = s1[i++];
	i = 0;
	while (s2[i])
		copy[j++] = s2[i++];
	copy[j] = '\0';
	return (copy);
}
