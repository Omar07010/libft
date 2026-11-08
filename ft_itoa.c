/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohajjaji <ohajjaji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 08:24:38 by ohajjaji          #+#    #+#             */
/*   Updated: 2026/10/20 18:49:32 by ohajjaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	count;
	long	nbr;
	char	*arr;
	int		sign;

	nbr = n;
	count = count_n(nbr);
	arr = malloc(sizeof(char) * (count + 1));
	if (!arr)
		return (NULL);
	sign = (n < 0);
	if (sign)
	{
		arr[0] = '-';
		nbr *= -1;
	}
	arr[count] = '\0';
	while (count > sign)
	{
		count--;
		arr[count] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (arr);
}
