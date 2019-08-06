/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:25:23 by vkostenk          #+#    #+#             */
/*   Updated: 2019/02/28 20:06:50 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char			*get_piece_size(char *line, t_data *data)
{
	char **line_data;

	while (ft_strncmp(line, "Piece", 5) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	if (ft_strncmp(line, "Piece", 5) == 0)
	{
		line_data = ft_strsplit(line, ' ');
		data->piece_h = ft_atoi(line_data[1]);
		data->piece_w = ft_atoi(line_data[2]);
		data->total_piece_dots = data->piece_h * data->piece_w;
		free(line_data[0]);
		free(line_data[1]);
		free(line_data[2]);
		free(line_data);
	}
	return (line);
}

void			create_piece(t_data *data)
{
	int i;

	i = 0;
	data->piece = (char **)malloc(sizeof(char*) * (data->piece_h + 1));
	while (i < data->piece_h + 1)
	{
		data->piece[i] = (char*)malloc(sizeof(char) * (data->piece_w + 1));
		i++;
	}
}

char			*get_piece(char *line, t_data *data)
{
	int i;
	int j;
	int read_point;

	i = 0;
	j = 0;
	read_point = 0;
	create_piece(data);
	while (i < data->piece_h)
	{
		free(line);
		get_next_line(0, &line);
		while (j < data->piece_w)
		{
			data->piece[i][j] = line[read_point++];
			j++;
		}
		i++;
		j = 0;
		read_point = 0;
	}
	return (line);
}
