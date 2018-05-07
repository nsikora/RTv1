/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsikora <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 11:31:44 by nsikora           #+#    #+#             */
/*   Updated: 2018/05/07 13:56:58 by nsikora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RTv1.h"

void	display_window(t_dataset *data)
{
	mlx_key_hook(data->win, key_event, data);
	mlx_loop(data->mlx);
}
