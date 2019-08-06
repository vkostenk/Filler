/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:28:44 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/10 22:28:46 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr;

	ptr = s;
	while (*ptr)
		ptr++;
	if (c == '\0')
		return ((char *)ptr);
	while (ptr-- != s)
		if (*ptr == c)
			return ((char *)ptr);
	return (NULL);
}
