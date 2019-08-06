/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:47:56 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/11 21:13:22 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	while (*p1 == *p2)
	{
		if (*p1 == '\0' && *p2 == '\0')
			return (0);
		p1++;
		p2++;
	}
	return (*p1 - *p2);
	return (0);
}
