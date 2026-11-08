/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:35:48 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/10/24 10:32:37 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	len = 0;
	while (s[len])
	{
		copy[len] = s[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
