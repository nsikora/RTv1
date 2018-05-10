/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RTv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:14:24 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/10 11:49:06 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdlib.h>

#ifndef	RTV1_H
# define RTV1_H

typedef	struct		s_camera
{
	int				x;
	int				y;
	int				z;
	void			*image;
	unsigned int	*image_str;
}					t_camera;

typedef struct		s_ray
{
	float			x;
	float			y;
	float			z;
}					t_ray;

typedef struct		s_spot
{
	int				x;
	int				y;
	int				z;
}					t_spot;

typedef struct		s_sphere
{
	float			x;
	float			y;
	float			z;
	int				rayon;
	int				color;
}					t_sphere;

typedef	struct		s_dataset
{
	void			*mlx;
	void			*win;
	char			*name;
	int				win_x;
	int				win_y;
}					t_dataset;

void	declare_data(t_dataset *data);
void	display_window(t_dataset *data);
int		key_event(int key, t_dataset *data);
void	declare_sphere(t_sphere *sphere);
void	place_camera(t_camera *camera);
void    calculate_sphere(t_sphere *sphere, t_dataset *data);
void	free_for_all(t_dataset *data);

#endif
