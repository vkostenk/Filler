/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:04:13 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/14 16:16:18 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*b;

	if (!s || !f || (!(b = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		b[i] = f(i, (char)s[i]);
		i++;
	}
	return (b);
}
