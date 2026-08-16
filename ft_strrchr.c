/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lernst <lernst@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:08:10 by lernst            #+#    #+#             */
/*   Updated: 2026/05/01 22:24:11 by lernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = ft_strlen((const char *)ptr);
	while (ptr[i] != (unsigned char)c && i != 0)
		i--;
	if (ptr[i] == (unsigned char)c)
		return ((char *)&ptr[i]);
	return (NULL);
}
