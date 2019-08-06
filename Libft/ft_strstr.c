/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 15:30:08 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/14 20:48:35 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		i = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
