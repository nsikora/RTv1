/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:31:44 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/10 11:23:06 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

int				set_scene(t_dataset *data)
{
	t_sphere	*sphere;
	t_camera	*camera;
	if ((sphere = malloc(sizeof(t_sphere))) == 0)
		return (1);
	if ((camera = malloc(sizeof(t_camera))) == 0)
		return (1);
	declare_sphere(sphere);
	calculate_sphere(sphere, data);
	place_camera(camera);
	return (0);
}

void			display_window(t_dataset *data)
{
	set_scene(data);
	mlx_key_hook(data->win, key_event, data);
	mlx_loop(data->mlx);
}
