/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:34:21 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/13 15:11:09 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*b;
	const char	*src;
	size_t		i;

	if (!s)
		return (NULL);
	b = ft_strnew(len);
	if (b == NULL)
		return (0);
	src = &s[start];
	i = 0;
	while (src[i] && i < len)
	{
		b[i] = src[i];
		i++;
	}
	while (i < len)
	{
		b[i] = '\0';
		i++;
	}
	return (b);
}
