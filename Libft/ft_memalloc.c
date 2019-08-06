/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:27:00 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/13 15:09:49 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *p;

	if ((p = (void *)malloc(size * sizeof(*p))))
	{
		ft_bzero(p, size);
		return (p);
	}
	return (NULL);
}
