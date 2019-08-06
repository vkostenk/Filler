/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:39:06 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/16 15:47:56 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_letters(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (str[count] != c && str[count])
		count++;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		words;
	char		**tab;

	i = 0;
	if (!s || !c)
		return ((void *)0);
	words = ft_count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*s == c && *s)
			s++;
		tab[i] = (char *)malloc(sizeof(char) * (ft_count_letters(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			tab[i][j++] = *s++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
