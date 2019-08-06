/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:15:13 by vkostenk          #+#    #+#             */
/*   Updated: 2018/07/16 16:16:21 by vkostenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int nb, int power)
{
	if (power > 100)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}
