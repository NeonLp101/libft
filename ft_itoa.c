/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lernst <lernst@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:43:06 by lernst            #+#    #+#             */
/*   Updated: 2026/04/24 10:12:42 by lernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long n, int negative)
{
	size_t	len;

	len = 0;
	if (negative)
		len = 1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	size;
	size_t	i;
	long	nb;

	if (n < 0)
		nb = -(long)n;
	else
		nb = (long)n;
	size = ft_numlen(nb, n < 0);
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	i = size;
	if (nb == 0)
		result[--i] = '0';
	while (nb > 0)
	{
		result[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
