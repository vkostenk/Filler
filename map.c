/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:24:35 by vkostenk          #+#    #+#             */
/*   Updated: 2019/03/02 21:33:16 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char			*get_map_size(char *line, t_data *data)
{
	char **line_data;

	while (ft_strncmp(line, "Plateau", 7) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	if (ft_strncmp(line, "Plateau", 7) == 0)
	{
		line_data = ft_strsplit(line, ' ');
		data->height = ft_atoi(line_data[1]);
		data->width = ft_atoi(line_data[2]);
		free(line_data[0]);
		free(line_data[1]);
		free(line_data[2]);
		free(line_data);
		data->total_dots = data->height * data->width;
	}
	return (line);
}

void			create_map(t_data *data)
{
	int i;

	i = 0;
	data->map = (char **)malloc(sizeof(char*) * (data->height + 1));
	while (i < data->height + 1)
	{
		data->map[i] = (char*)malloc(sizeof(char) * (data->width + 1));
		i++;
	}
}

char			*help(char *line, t_data *data)
{
	while (ft_strncmp(line, "000", 3) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	create_map(data);
	return (line);
}

char			*get_map(char *line, t_data *data)
{
	int i;
	int j;
	int read_point;

	i = 0;
	j = 0;
	read_point = 4;
	line = help(line, data);
	while (i < data->height)
	{
		while (j < data->width)
		{
			data->map[i][j] = line[read_point++];
			j++;
		}
		i++;
		j = 0;
		free(line);
		get_next_line(0, &line);
		read_point = 4;
	}
	return (line);
}
