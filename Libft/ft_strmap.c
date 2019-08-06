/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:03:49 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/14 16:13:59 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*b;

	if (!s || !f || (!(b = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		b[i] = f((char)s[i]);
		i++;
	}
	return (b);
}
