/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:20:01 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/07 11:24:03 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

void	declare_data(t_dataset *data)
{
	data->mlx = mlx_init();
	data->name = "RTv1";
	data->win_x = 2560;
	data->win_y = 1440;
}
