/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:34:54 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/10 15:46:32 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	symb;
	size_t			i;

	i = 0;
	string = (unsigned char *)s;
	symb = (unsigned char)c;
	while (n)
	{
		if (string[i] == symb)
		{
			return (string + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
