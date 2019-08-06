/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:48:42 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/11 14:12:57 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;

	if (!(*needle))
		return ((char *)haystack);
	x = ft_strlen(needle);
	while (*haystack && len-- >= x)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, x) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return ((void *)0);
}
