/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:31:45 by vkostenk          #+#    #+#             */
/*   Updated: 2019/02/28 19:39:26 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void			start_logic(t_data *data)
{
	int x;
	int y;
	int k;

	x = 0;
	y = 0;
	while (y < data->height)
	{
		while (x < data->width)
		{
			k = chek_piece(data, x, y);
			if (k == 1)
				find_answer(data, x, y);
			x++;
		}
		x = 0;
		y++;
	}
	ft_putnbr(data->final_y);
	ft_putchar(' ');
	ft_putnbr(data->final_x);
	ft_putchar('\n');
}

void			find_answer(t_data *data, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i++ < data->height)
	{
		while (j++ < data->width)
		{
			if (data->map[i][j] == data->enemy)
			{
				data->right = i < y ? y - i : i - y;
				data->left = j < x ? x - j : j - x;
				data->dest = data->right + data->left;
				if (data->min == -1 || data->min > data->dest)
				{
					data->min = data->dest;
					data->final_x = x;
					data->final_y = y;
				}
			}
		}
		j = 0;
	}
}

int				chek_piece(t_data *data, int x, int y)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < data->piece_h && y + i < data->height)
	{
		while (j < data->piece_w && x + j < data->width)
		{
			if (data->piece[i][j] == '*' && (data->map[y + i][x + j] ==
	data->player || data->map[y + i][x + j] == ft_tolower(data->player)))
				k++;
			else if (data->piece[i][j] == '*' && data->map[y + i][x + j] != '.')
				return (0);
			j++;
		}
		if (!check_row(data, i, j))
			return (0);
		j = 0;
		i++;
	}
	return (k == 1 && check_column(data, i) ? 1 : 0);
}

int				check_column(t_data *data, int y)
{
	int x;

	x = 0;
	while (y < data->piece_h)
	{
		while (x < data->piece_w)
		{
			if (data->piece[y][x] == '*')
				return (0);
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}

int				check_row(t_data *data, int y, int x)
{
	while (x < data->piece_w)
	{
		if (data->piece[y][x] == '*')
			return (0);
		x++;
	}
	return (1);
}
