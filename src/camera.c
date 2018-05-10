/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 11:19:17 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/10 11:48:54 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

void		init_image(t_dataset *data, t_camera *camera)
{
	float	ratio;
	int		x_min;
	int		x_max;
	int		y_min;
	int		y_max;
	int		bpp;
	int		s_l;
	int		endian;

	ratio = data->win_x / data->win_y;
	x_min = -1;
	x_max = 1;
	y_min = ratio * x_min;
	y_max = ratio * x_max;
	camera->image = mlx_new_image(data->mlx, data->win_x, data->win_y);
	camera->image_str = (unsigned int *)(mlx_get_data_addr(camera->image,
	&bpp, &s_l, &endian));
}

void		place_camera(t_camera *camera)
{
	camera->x = 1;
	camera->y = 1;
	camera->z = 0;
}
