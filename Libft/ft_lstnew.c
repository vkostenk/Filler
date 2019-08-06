/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:06:28 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/16 18:31:02 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = ft_memalloc(content_size);
		node->content = ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	return (node);
}
