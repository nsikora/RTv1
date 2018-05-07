/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:04:32 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/07 14:20:10 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

int				main(void)
{
	t_dataset	*data;

	if ((data = malloc(sizeof(t_dataset))) == 0)
		return (1);
	declare_data(data);
	data->win = mlx_new_window(data->mlx, data->win_x, data->win_y, data->name);
	display_window(data);
	free_for_all(data);
	return (0);
}
