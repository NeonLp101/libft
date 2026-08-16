/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lernst <lernst@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:46:01 by lernst            #+#    #+#             */
/*   Updated: 2026/04/26 14:32:34 by lernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)s;
	while (n != 0 && ptr1[i] != (unsigned char)c)
	{
		i++;
		n--;
	}
	if (n != 0)
		return ((void *)&ptr1[i]);
	return (NULL);
}
