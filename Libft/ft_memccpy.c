/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:34:59 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/10 14:07:38 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	k;
	size_t			i;

	a = (unsigned char *)d;
	b = (unsigned char *)src;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (b[i] == k)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
