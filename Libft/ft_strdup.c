/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 16:25:39 by vkostenk          #+#    #+#             */
/*   Updated: 2018/03/21 22:09:58 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s2;

	size = ft_strlen(s1);
	if (!(s2 = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
