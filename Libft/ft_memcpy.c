/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:02:30 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/10 13:28:31 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (n)
	{
		b[i] = a[i];
		i++;
		n--;
	}
	return (b);
}
