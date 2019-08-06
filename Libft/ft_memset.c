/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:59:22 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/14 18:56:25 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	sym;
	unsigned char	*dst;

	i = 0;
	sym = (unsigned char)c;
	dst = (unsigned char *)b;
	while (len > 0)
	{
		dst[i] = sym;
		i++;
		len--;
	}
	return (b);
}
