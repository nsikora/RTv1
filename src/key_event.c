/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_event.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:34:22 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/07 13:53:00 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

int		key_event(int key, t_dataset *data)
{
	if (key == 53)
	{
		mlx_clear_window(data->mlx, data->win);
		free_for_all(data);
	}
	return (0);
}
