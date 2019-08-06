/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:23:14 by vkostenk          #+#    #+#             */
/*   Updated: 2019/02/28 19:28:24 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	*get_player(char *line, t_data *data)
{
	while (ft_strncmp(line, "$$$ exec p", 9) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	data->player = (line[10] == '1' ? 'O' : 'X');
	data->enemy = (line[10] == '1' ? 'X' : 'O');
	return (line);
}
