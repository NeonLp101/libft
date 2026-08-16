/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lernst <lernst@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:02:38 by lernst            #+#    #+#             */
/*   Updated: 2026/05/01 22:27:21 by lernst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strlens1;
	size_t	strlens2;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strlens1 = ft_strlen(s1);
	strlens2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (strlens1 + strlens2 +1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, strlens1 + 1);
	ft_strlcpy(result + strlens1, s2, strlens2 + 1);
	return (result);
}
