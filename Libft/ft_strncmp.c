/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 21:41:06 by vkostenk          #+#    #+#             */
/*   Updated: 2018/03/19 21:55:05 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	while (*p1 == *p2 && n > 0)
	{
		if (*p1 == '\0' && *p2 == '\0')
			return (0);
		p1++;
		p2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*p1 - *p2);
}
