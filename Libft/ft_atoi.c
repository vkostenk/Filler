/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 22:30:21 by vkostenk          #+#    #+#             */
/*   Updated: 2019/02/28 18:26:05 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		res;
	int			neg;
	const char	*s;

	s = str;
	while (*s && ft_isspace(*s))
		s++;
	neg = 1;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			neg = -1;
	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + neg * (*s++ - 48);
	}
	return ((int)res);
}
