/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 11:39:47 by jdesmare          #+#    #+#             */
/*   Updated: 2017/03/18 11:39:34 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	init_image(t_env *env)
{
	int		bpp;
	int		sizeline;
	int		endian;

	bpp = 32;
	sizeline = WINDOW_X * 4;
	endian = 0;
	env->mlx = mlx_init();
	if (env->mlx == NULL)
	{
		ft_putstr_fd("Error : mlx_init failed\n", 2);
		exit(1);
	}
	env->window = mlx_new_window(env->mlx, WINDOW_X, WINDOW_Y, "Wolf3d");
	env->image = mlx_new_image(env->mlx, WINDOW_X, WINDOW_Y);
	env->data = mlx_get_data_addr(env->image, &bpp, &sizeline, &endian);
}
