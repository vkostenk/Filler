/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:40:52 by vkostenk          #+#    #+#             */
/*   Updated: 2019/03/02 21:33:10 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft.h"
# include "get_next_line.h"
# include "stdio.h"
# include <sys/stat.h>
# include <fcntl.h>
# include "stdlib.h"

typedef struct					s_data
{
	int							piece_h;
	int							piece_w;
	int							height;
	int							width;
	int							total_piece_dots;
	int							total_dots;
	char						player;
	char						enemy;
	int							pizda;
	int							final_x;
	int							final_y;
	int							min;
	int							dest;
	int							right;
	int							left;
	char						**map;
	char						**piece;

}								t_data;

void							init_data(t_data *data);
void							read_all();
void							get_all_shit(char *line, t_data *data);
char							*get_player(char *line, t_data *data);
char							*get_map_size(char *line, t_data *data);
char							*get_map(char *line, t_data *data);
void							create_map(t_data *data);
char							*get_piece_size(char *line, t_data *data);
char							*get_piece(char *line, t_data *data);
void							create_piece(t_data *data);
void							start_logic(t_data *data);
int								chek_piece(t_data *data, int x, int y);
int								fit_map(t_data *data, int x, int y);
void							find_answer(t_data *data, int x, int y);
int								check_row(t_data *data, int i, int j);
int								check_column(t_data *data, int i);
char							*help(char *line, t_data *data);

#endif
