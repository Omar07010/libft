/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:16:40 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/10/20 18:46:45 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*copy;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (size > ((size_t)-1) / nmemb)
		return (NULL);
	total_size = nmemb * size;
	copy = malloc(total_size);
	if (!copy)
		return (NULL);
	ft_bzero(copy, total_size);
	return (copy);
}
