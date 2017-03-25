/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 11:38:39 by jdesmare          #+#    #+#             */
/*   Updated: 2017/03/18 11:49:08 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void		init_vars(t_env *env)
{
	env->posX = 22;
	env->posY = 12;
	env->dirX = -1;
	env->dirY = 0;
	env->planeX = 0;
	env->planeY = 0.66;
	env->time = 0;
	env->oldTime = 0;
}

void		draw(t_env *env)
{
	init_vars(env);
	while (env->done == 0)
	{
		
	}
}
