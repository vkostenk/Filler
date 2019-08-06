/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 12:16:07 by vkostenk          #+#    #+#             */
/*   Updated: 2019/02/28 20:05:10 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			init_data(t_data *data)
{
	data->height = 0;
	data->width = 0;
	data->piece_h = 0;
	data->piece_w = 0;
	data->pizda = 0;
}

void			get_all_shit(char *line, t_data *data)
{
	if (data->pizda == 0)
		line = get_player(line, data);
	data->pizda = 1;
	line = get_map_size(line, data);
	line = get_map(line, data);
	line = get_piece_size(line, data);
	line = get_piece(line, data);
	free(line);
}

void			read_all(void)
{
	char	*line;
	t_data	*data;

	data = malloc(sizeof(t_data));
	init_data(data);
	while (get_next_line(0, &line) > 0)
	{
		get_all_shit(line, data);
		data->min = -1;
		data->final_x = 0;
		data->final_y = 0;
		start_logic(data);
	}
}

int				main(void)
{
	read_all();
	return (0);
}
