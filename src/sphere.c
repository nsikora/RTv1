/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 10:11:21 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/10 14:11:07 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "RTv1.h"

void	calculate_sphere(t_sphere *sphere, t_dataset *data)
{
	float	phi;
	float	theta;
	int	x;
	int	y;
	int	z;

	phi = 0;
	theta = 90;
	while (sphere->rayon > 0)
	{
		while (theta < 90)
		{
			while (phi < 360)
			{
				x = cos(theta) * cos(phi) * sphere->rayon;
				y = cos(theta) * sin(phi) * sphere->rayon;
				z = sin(theta) * sphere->rayon;
				mlx_pixel_put(data->mlx, data->win, x + 500, y + 500, sphere->color);
				phi++;
			}
			theta++;
			phi = 0;
		}
		sphere->rayon--;
		theta = 0;
	}
}

void	declare_sphere(t_sphere *sphere)
{
	sphere->rayon = 400;
	sphere->x = 1;
	sphere->y = 1;
	sphere->z = 1;
	sphere->color = 32768;
}
